#include "bsq.h"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}
void	ft_putnstr(char *str, int len)
{
	write(1, str, len);
}