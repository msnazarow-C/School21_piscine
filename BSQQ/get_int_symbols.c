int		get_int_symbols(char **str, int len, int *a, char *c)
{
	int out;
	int i;

	i = 0;
	out = 0;

	while ((*(*str) >= 9 && *(*str) <= 13) || *(*str) == ' ')
		(*str)++;
	while (*(*str) >= 48 && *(*str) <= 48 + 10 && ++i < len)
		{
			out = out * 10 + (*(*str) - 48);
			(*str)++;
		}
		*a = out;
		i = -1;
		while (++i < 3)
		{
		    c[i] = **str;
		    (*str)++;
		}
		if (**str != '\n')
		    return (-1);
    return (0);
}