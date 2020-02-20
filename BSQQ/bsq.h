#ifndef BSQ_H
#include "fcntl.h"
# define STRING 10000000
#include "unistd.h"
#include "stdlib.h"
#include "time.h"
# define BSQ_H

typedef struct		s_max
{
	int x;
	int y;
	int count;
}					t_max;
typedef struct		s_size
{
	int collums;
	int lines;
}					t_size;
typedef struct		s_list
{
	struct s_list	*next;
	char			*data;
	int             len;
}					t_list;

t_max	*create_list(void);
void    print_bsq(char *pb, t_size size, t_max max);
t_max	max_count(t_max max, int i ,int j, int count);
void    ft_putchar(char c);
void	ft_putnbr(int a);
int		ft_atoil(char **str, int len, char c);
char	*ft_strncpy2(char *dest, char **src, unsigned int n);
int     bsq(char *pb, int **map, t_size size, char c);
int     make_tab(int f);
int     min(int a, int b, int c);
void    print_tab(int **tab,int lines, int collums);
void    ft_free(int **tab, int lines);
t_list				*ft_create_elem(char *data, int len);
void				ft_list_push_back(t_list **l, char *data, int len);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strndup(char *src, int len);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int		get_int_symbols(char **str, int len, int *a, char *c);
void    change_pb(t_list *list,t_max max,t_size size, char c);
void	ft_putnstr(char *str, int len);
void	ft_print_list(t_list *list,int pass);
char     get_char_list(t_list *list,int num);
void     set_char_list(t_list *list, int num, char c);
void    set_last_list(t_list *list, int num, char c);
void	ft_list_clear(t_list **begin_list);

#endif
