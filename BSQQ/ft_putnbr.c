#include "bsq.h"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putnbr(int a)
{
		if (a < 0)
		{
			write(1, "-", 1);
		}
		if (a / 10 != 0)
		{
			ft_putnbr(a > 0 ? a / 10 : (a / 10) * (-1));
			a = a > 0 ? a % 10 + 48 : (a % 10) * (-1) + 48;
			write (1, &a, 1);
		}
		else
		{
			a = a > 0 ? a + 48 : -a + 48;
			write (1, &a, 1);
		}
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