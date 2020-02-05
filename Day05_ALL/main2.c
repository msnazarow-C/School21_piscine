/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 09:34:59 by larosale          #+#    #+#             */
/*   Updated: 2020/02/04 14:07:34 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

void ft_putstr(char *str);
void ft_putnbr(int nb);
int ft_atoi(char *str);
char *ft_strcpy(char *dest, char *src);
char *ft_strncpy(char *dest, char *src, unsigned int n);
char *ft_strstr(char *str, char *to_find);
int ft_strcmp(char *s1, char *s2);
int ft_strncmp(char *s1, char *s2, unsigned int n);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	printf("******************************************\n\n");
	
	/* ft_putstr test */
	ft_putstr("ft_putstr test: \n");
	ft_putstr("Printing test string: ");
	ft_putstr("Test string for ft_putstr\n");
	ft_putstr("\n");

	/* ft_putnbr test */
	printf("ft_putnbr test:\n");
	printf("Printing -2147483648:\n");
	ft_putnbr(-2147483648);
	printf("\nPrinting -123456:\n");
	ft_putnbr(-123456);
	printf("\nPrinting 2147483647:\n");
	ft_putnbr(2147483647);
	printf("\nPrinting 0:\n");
	ft_putnbr(0);
	printf("\n\n");

	/* ft_atoi test */
	printf("ft_atoi test:\n");
	printf("String   ft_atoi result   atoi result\n");
	printf("\"-2147483648\"   %d   %d\n", ft_atoi("-2147483648"), atoi("-2147483648"));
	printf("\"2147483647\"   %d   %d\n", ft_atoi("2147483647"), atoi("2147483647"));
	printf("\"  -23455\"   %d   %d\n", ft_atoi("  -23455"), atoi("  -23455"));
	printf("\"\\f\\n\\t\\r\\v -12345\"	%d   %d\n", ft_atoi("\f\n\t\r\v -12345"), atoi("\f\n\t\r\v -12345"));
	printf("\"12345 test\"   %d   %d\n", ft_atoi("12345 test"), atoi("12345 test"));
	printf("\"+12345\"   %d   %d\n", ft_atoi("+12345"), atoi("+12345"));
	printf("\"+-12345\"   %d   %d\n", ft_atoi("+-12345"), atoi("+-12345"));
	printf("\"++12345\"   %d   %d\n", ft_atoi("++12345"), atoi("+-12345"));
	printf("\"123456789012\"   %d   %d   !Large numbers are not correctly interpreted by atoi\n", ft_atoi("123456789012"), atoi("123456789012"));
	printf("\n");

	/* ft_strcpy test */
	char std_dest[20];
	char std_src[20];
	char ft_dest[20];
	char ft_src[20];
	
	printf("ft_strcpy test:\n");
	printf("Src string  Dest string  ft_strcpy result  strcpy result\n");
	printf("Test123  Test12345  %s  %s\n", ft_strcpy(strcpy(ft_dest, "Test12345"), strcpy(ft_src, "Test123")), strcpy(strcpy(std_dest, "Test12345"), strcpy(std_src, "Test123")));
	printf("Test12345  Test123  %s  %s   !Overflow is not detected with this test\n", ft_strcpy(strcpy(ft_dest, "Test123"), strcpy(ft_src, "Test12345")), strcpy(strcpy(std_dest, "Test123"), strcpy(std_src, "Test12345")));
	printf("\n");

	/* ft_strncpy test */
	printf("ft_strncpy test:\n");
	printf("Src string  Dest string  N  ft_strncpy result  strncpy result\n");
	printf("Test123 1111111111  4  %s  %s\n", ft_strncpy(strcpy(ft_dest, "1111111111"), strcpy(ft_src, "Test123"), 4), strncpy(strcpy(std_dest, "1111111111"), strcpy(std_src, "Test123"), 4));
	printf("Test123 1111111111  8  %s  %s\n", ft_strncpy(strcpy(ft_dest, "1111111111"), strcpy(ft_src, "Test123"), 8), strncpy(strcpy(std_dest, "1111111111"), strcpy(std_src, "Test123"), 8));
	printf("Test123456789012345 1111111111  12  %s  %s   !Absence of end of string is not detected with this test\n", ft_strncpy(strcpy(ft_dest, "1111111111"), strcpy(ft_src, "Test123456789012345"), 12), strncpy(strcpy(std_dest, "1111111111"), strcpy(std_src, "Test123456789"), 12));
	printf("\n");

	/* ft_strstr test */
	printf("ft_strstr test:\n");
	printf("To find  Dest string  ft_strstr result  strstr result\n");
	printf("123 Test12345  %s  %s\n", ft_strstr(strcpy(ft_dest, "Test12345"), strcpy(ft_src, "123")), strstr(strcpy(std_dest, "Test12345"), strcpy(std_src, "123")));
	printf("\\0 Test12345  %s  %s\n", ft_strstr(strcpy(ft_dest, "Test12345"), strcpy(ft_src, "\0")), strstr(strcpy(std_dest, "Test12345"), strcpy(std_src, "\0")));
	printf("789 Test12345  %s  %s\n", ft_strstr(strcpy(ft_dest, "Test12345"), strcpy(ft_src, "789")), strstr(strcpy(std_dest, "Test12345"), strcpy(std_src, "789")));
	printf("\n");

	/* ft_strcmp test */
	printf("ft_strcmp test:\n");
	printf("Left string  Right string  ft_strcmp result  strcmp result\n");
	printf("Test123 Test123  %d  %d\n", ft_strcmp("Test123", "Test123"), strcmp("Test123", "Test123"));
	printf("Test123 Test124  %d  %d\n", ft_strcmp("Test123", "Test124"), strcmp("Test123", "Test124"));
	printf("Test123 Test12  %d  %d\n", ft_strcmp("Test123", "Test12"), strcmp("Test123", "Test12"));
	printf("Test12 Test123  %d  %d\n", ft_strcmp("Test12", "Test123"), strcmp("Test12", "Test123"));
	printf("\\0 \\0  %d  %d\n", ft_strcmp("\0", "\0"), strcmp("\0", "\0"));
	printf("Test12 \\0  %d  %d\n", ft_strcmp("Test12", "\0"), strcmp("Test12", "\0"));


	return (0);
}
