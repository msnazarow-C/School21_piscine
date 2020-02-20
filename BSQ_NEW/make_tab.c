/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshelton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 17:45:27 by mshelton          #+#    #+#             */
/*   Updated: 2020/02/19 17:45:29 by mshelton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int    make_tab(int f)
{
    if (reading(f) || sizes() || memory_alloc())
        return (-1);
    if (shell_bsq_alg())
        return (-1);
    change_pb(g_s.list, g_s.max,g_s.size, g_s.symbols[2]);
    ft_print_list(g_s.list, g_s.temp);
    free_map_buf();
    g_s.map = NULL;
    return (0);
}
