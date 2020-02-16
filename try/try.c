#include "unistd.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int check(char c)
{
	return (c == ' ' || c == '\t');
}


void roasting(char *str)
{
	char * temp;
	int i;
	int j;

	i = 0;
	j = 0;
	while (check(*str))
		str++;
	temp = str;
	while (!(check(*str)))
		i++;
	check[i++] = check0;
	str += i;
	while (str[j])
	{
		while (!check(str[j]))
			ft_putchar(str[j++]);
		ft_putchar(' ');
	}
}
int main (int a,char **b)
{
	roasting(b[1]);
}
