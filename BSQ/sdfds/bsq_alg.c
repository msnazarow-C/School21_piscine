/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_alg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshelton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 21:39:48 by mshelton          #+#    #+#             */
/*   Updated: 2020/02/19 21:39:50 by mshelton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void		free_map_buf(void)
{
	free(g_s.map[0]);
	free(g_s.map[1]);
	free(g_s.map);
	free(g_s.buf);
	g_s.buf = NULL;
	ft_list_clear(&g_s.list);
}

int			sizes(void)
{
	g_s.pb = g_s.list->data;
	g_s.pass = 0;
	while (g_s.pb[g_s.pass] != '\n' && g_s.pb[g_s.pass])
		++g_s.pass;
	ft_strncpy(g_s.symbols, &g_s.pb[g_s.pass - 3], 3);
	g_s.pb = g_s.list->data;
	if (get_int_symbols(&g_s.pb, g_s.pass - 2,
	&(g_s.size.lines), g_s.symbols))
	{
		ft_list_clear(&g_s.list);
		free(g_s.buf);
		g_s.buf = NULL;
		return (-1);
	}
	g_s.size.collums = 0;
	g_s.pb = g_s.pb + 1;
	g_s.temp = g_s.pass + 1;
	g_s.c = get_char_list(g_s.list, (g_s.size.collums + g_s.pass + 1));
	return (0);
}

int			memory_alloc(void)
{
	while (g_s.c != '\n' && g_s.c)
	{
		g_s.size.collums++;
		g_s.c = get_char_list(g_s.list, (g_s.size.collums + g_s.pass + 1));
	}
	if (!g_s.size.lines || !g_s.size.collums)
	{
		free(g_s.buf);
		g_s.buf = NULL;
		ft_list_clear(&g_s.list);
		return (-1);
	}
	g_s.map = (int**)malloc(2 * sizeof(int*));
	g_s.i = 0;
	g_s.j = -1;
	g_s.map[0] = (int*)malloc((g_s.size.collums + 1) * sizeof(int));
	g_s.map[1] = (int*)malloc((g_s.size.collums + 1) * sizeof(int));
	if (!g_s.map || !g_s.map[0] || !g_s.map[1])
		return (-1);
	return (0);
}

int			bsq_alg(void)
{
	g_s.c = get_char_list(g_s.list, (g_s.j + g_s.pass + 1));
	if (g_s.c == g_s.symbols[0])
	{
		g_s.map[g_s.i % 2][g_s.j + 1] = min(g_s.map[!(g_s.i % 2)][g_s.j + 1],
		g_s.map[!(g_s.i % 2)][g_s.j], g_s.map[g_s.i % 2][g_s.j]) + 1;
		g_s.max = max_count(g_s.max, g_s.j + 1,
		g_s.i, g_s.map[g_s.i % 2][g_s.j + 1]);
	}
	else if (g_s.c == g_s.symbols[1])
		g_s.map[g_s.i % 2][g_s.j + 1] = 0;
	else
	{
		free_map_buf();
		return (-1);
	}
	return (0);
}

int			shell_bsq_alg(void)
{
	while (++g_s.j <= g_s.size.collums)
		g_s.map[g_s.i][g_s.j] = 0;
	while (++g_s.i <= g_s.size.lines)
	{
		g_s.map[g_s.i % 2][0] = 0;
		g_s.j = -1;
		while (++g_s.j < g_s.size.collums)
			if (bsq_alg() == -1)
				return (-1);
		g_s.c = get_char_list(g_s.list, g_s.j + g_s.pass + 1);
		if (g_s.c != '\n')
		{
			free_map_buf();
			return (-1);
		}
		g_s.pass += (g_s.size.collums + 1);
	}
	g_s.c = get_char_list(g_s.list, (g_s.pass + 1));
	if (g_s.c != '\0')
	{
		free_map_buf();
		return (-1);
	}
	return (0);
}
