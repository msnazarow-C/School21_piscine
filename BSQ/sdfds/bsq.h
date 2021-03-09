/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshelton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 17:16:05 by mshelton          #+#    #+#             */
/*   Updated: 2020/02/19 17:16:07 by mshelton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# define STRING 10000000
# include "fcntl.h"
# include "unistd.h"
# include "stdlib.h"
# include "time.h"

typedef struct		s_max
{
	int				x;
	int				y;
	int				count;
}					t_max;

typedef struct		s_size
{
	int				collums;
	int				lines;
}					t_size;

typedef struct		s_list
{
	struct s_list	*next;
	char			*data;
	int				len;
}					t_list;

typedef struct		s_struct_tab
{
	int				**map;
	char			*buf;
	t_list			*list;
	char			symbols[3];
	char			*pb;
	t_size			size;
	t_max			max;
	char			c;
	int				pass;
	int				temp;
	int				i;
	int				j;
	int				len;
}					t_struct_tab;

t_max				*create_list(void);
t_max				max_count(t_max max, int i, int j, int count);
void				ft_putchar(char c);
int					make_tab(int f);
int					min(int a, int b, int c);
void				ft_free(int **tab, int lines);
t_list				*ft_create_elem(char *data, int len);
void				ft_list_push_back(t_list **l, char *data, int len);
char				*ft_strndup(char *src, int len);
void				ft_puterror(char *str);
char				*ft_strncpy(char *dest, char *src, unsigned int n);
int					get_int_symbols(char **str, int len, int *a, char *c);
void				change_pb(t_list *list, t_max max, t_size size, char c);
void				ft_putnstr(char *str, int len);
void				ft_print_list(t_list *list, int pass);
char				get_char_list(t_list *list, int num);
void				set_char_list(t_list *list, int num, char c);
void				ft_list_clear(t_list **begin_list);
int					reading(int f);
int					sizes(void);
int					memory_alloc(void);
int					bsq_alg(void);
int					shell_bsq_alg(void);
void				free_map_buf(void);
int					check_make(int f);
void				reading_user(int f);
void				reading_string(int argc, char **argv, int f);

t_struct_tab		g_s;

#endif
