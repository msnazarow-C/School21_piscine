/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 02:49:48 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/04 02:51:42 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *str1, char *str2,unsigned int n)
{
	    unsigned int i;

		i = 0;
		while (str1[i] == str2[i] && i < n)
			i++;
		return (str1[i] - str2[i]);
}
