#ifndef FT_EVAL_EXPR_H
# define FT_EVAL_EXPR_H

# include <unistd.h>
# include <stdlib.h>

int        eval_expr(char *expr);
int        ft_atoi(char *s);
void    ft_putchar(char c);
void    ft_putnbr(int nbr);

#endif

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb < 0)
    {
        ft_putchar('-');
        ft_putnbr(-nb);
        return ;
    }
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
        ft_putchar(nb + '0');
}

int        ft_atoi(char *str)
{
    int    nbr;

    nbr = 0;
    while (*str >= '0' && *str <= '9')
    {
        nbr = nbr * 10 + (*str - '0');
        str += 1;
    }
    return (nbr);
}
int        number(char *expr)
{
    int nbr1;

    while (*expr == ' ')
        expr += 1;
    if (*expr == '(')
    {
        expr += 1;
        nbr1 = eval_expr(expr);
        if (*expr == ')')
            expr += 1;
        return (nbr1);
    }
    return (ft_atoi(expr));
}

int        factors(char *expr)
{
    int        nbr1;
    int        nbr2;
    char    op;

    nbr1 = number(expr);
    while (*expr)
    {
        while (*expr == ' ')
            expr += 1;
        op = *expr;
        if (op != '/' && op != '*' && op != '%')
            return (nbr1);
        expr += 1;
        nbr2 = number(expr);
        if (op == '/')
            nbr1 /= nbr2;
        else if (op == '*')
            nbr1 *= nbr2;
        else
            nbr1 %= nbr2;
    }
    return (nbr1);
}

int        eval_expr(char *expr)
{
    int        nbr1;
    int        nbr2;
    char    op;

    nbr1 = factors(expr);
    while (*expr)
    {
        while (*expr == ' ')
            expr += 1;
        op = *expr;
        if (op != '+' && op != '-')
            return (nbr1);
        expr += 1;
        nbr2 = factors(expr);
        if (op == '+')
            nbr1 += nbr2;
        else
            nbr1 -= nbr2;
    }
    return (nbr1);
}

int        main(int ac, char **av)
{
    int i;
    int result;

    i = 1;
    while (--ac)
    {
        result = eval_expr(av[i]);
        ft_putnbr(result);
        ft_putchar('\n');
        i += 1;
    }
    return (0);
}


int        main(int ac, char **av)
{
    int i;
    int result;

    i = 1;
    while (--ac)
    {
        result = eval_expr(" 3 + (-1)* (-2) * (-3  * 4)");
        ft_putnbr(result);
        ft_putchar('\n');
        i += 1;
    }
    return (0);
}int        number(char *expr)
{
    int nbr1;

    while (*expr == ' ')
        expr += 1;
    if (*expr == '(')
    {
        expr += 1;
        nbr1 = eval_expr(expr);
        if (*expr == ')')
            expr += 1;
        return (nbr1);
    }
    return (ft_atoi(expr));
}

int        factors(char *expr)
{
    int        nbr1;
    int        nbr2;
    char    op;

    nbr1 = number(expr);
    while (*expr)
    {
        while (*expr == ' ')
            expr += 1;
        op = *expr;
        if (op != '/' && op != '*' && op != '%')
            return (nbr1);
        expr += 1;
        nbr2 = number(expr);
        if (op == '/')
            nbr1 /= nbr2;
        else if (op == '*')
            nbr1 *= nbr2;
        else
            nbr1 %= nbr2;
    }
    return (nbr1);
}

int        eval_expr(char *expr)
{
    int        nbr1;
    int        nbr2;
    char    op;

    nbr1 = factors(expr);
    while (*expr)
    {
        while (*expr == ' ')
            expr += 1;
        op = *expr;
        if (op != '+' && op != '-')
            return (nbr1);
        expr += 1;
        nbr2 = factors(expr);
        if (op == '+')
            nbr1 += nbr2;
        else
            nbr1 -= nbr2;
    }
    return (nbr1);
}

int        main(int ac, char **av)
{
    int i;
    int result;

    i = 1;
    while (--ac)
    {
        result = eval_expr("-3 + -8");
        ft_putnbr(result);
        ft_putchar('\n');
        i += 1;
    }
    return (0);
}