#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include "ex00/ft_putstr.c"
#include "ex01/ft_putnbr.c"
#include "ex02/ft_atoi.c"
#include "ex03/ft_strcpy.c"
#include "ex04/ft_strncpy.c"
#include "ex05/ft_strstr.c"
#include "ex06/ft_strcmp.c"
#include "ex07/ft_strncmp.c"

void	ft_putchar(char ch) {
	write(1, &ch, 1);
}

void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strstr(char *str, char *to_find);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
//char	*ft_strupcase(char *str);
//char	*ft_strlowcase(char *str);
//char	*ft_strcapitalize(char *str);



int main() {
	//ex00
	char *str00 = "\nEx00. OK!\n\n";
	ft_putstr(str00);
	
	//ex01
	ft_putstr("Ex01. Test for -2147483648: ");
	int INT_MIN = -2147483648;
	ft_putnbr(INT_MIN);
	printf("\n\n");

	//ex02
	char *str02_test1 = "2147483647";
	char *str02_test2 = " \t\v\n\r\f+123";
	char *str02_test3 = "-2147483648Hello, world!";
	printf("Ex02. Test for INT_MAX:  %s\n", ft_atoi(str02_test1) == atoi(str02_test1) ? "OK!" : "ERROR :(((");
	printf("Ex02. Test for spaces and sign \'+\':  %s\n", ft_atoi(str02_test2) == atoi(str02_test2) ? "OK!" : "ERROR :(((");
	printf("Ex02. Test for INT_MIN and letters:  %s\n\n", ft_atoi(str02_test3) == atoi(str02_test3) ? "OK!" : "ERROR :(((");

	//ex03
	char *str03_test_src = "Hello, world!";
	char str03_test1_dest[100] = "";
    ft_strcpy(str03_test1_dest, str03_test_src);
	printf("Ex03. Test for a full copy: %s\n", strncmp(str03_test1_dest, str03_test_src, 100) == 0 ? "OK!" : "ERROR :(((");
	printf("No more tests are needed, the original function doesn't handle overflows.\n\n");

	//ex04
	printf("Ex04 needs a standalone test! CHECK!!!\n\n");

	/*ex04
	char str04_test_src[10] = "0123456789";
	char str04_test1_dest[100] = "";
	char str04_test2_dest[100] = "";
	char str04_test3_dest[100] = "";
    ft_strncpy(str04_test1_dest, str04_test_src, 100);
    ft_strncpy(str04_test2_dest, str04_test_src, 5);
	printf("Ex04. Test for a full copy:    %s\n", strncmp(str04_test1_dest, str04_test_src, 100) == 0 ? "OK!" : "ERROR :(((");
	printf("Ex04. Test for a partial copy: %s\n\n", strncmp(str04_test2_dest, str04_test_src, 5) == 0 ? "OK!" : "ERROR :(((");*/
	
	//ex05
	/*char *str05_haystack = "This is a haystack. The needle is found!";
	char *str05_needle = "needle";
	char *str05_no_needle = "neednorm";
	char *str05_empty_needle = "";
	char *str05_long_needle = "needle is found! Extra";
	printf("Ex05. Checking for an empty needle: %s\n", strncmp(ft_strstr(str05_haystack, str05_empty_needle), str05_haystack, 100) == 0 ? "OK!" : "ERROR :(((");
	printf("Ex05. There is a needle in a haystack: the %s\n", ft_strstr(str05_haystack, str05_needle));
	printf("Ex05. There is NO needle in a haystack: (null) is %s\n", ft_strstr(str05_haystack, str05_no_needle));
	printf("Ex05. The needle is way too long: (null) is %s\n\n", ft_strstr(str05_haystack, str05_long_needle));*/
	
	//ex05
	char *str05_test_haystack = "Hello, World!";
	char *str05_test1_needle = "ello";
	char *str05_test2_needle = "ellp";
	char *str05_test3_needle = "";
	char *str05_test4_needle = "str";
	char *str05_test5_needle = "World! Hello rint rf";
	printf("Ex05. Test_1 for true:    %s\n", ft_strstr(str05_test_haystack, str05_test1_needle) == strstr(str05_test_haystack, str05_test1_needle) ? "OK!" : "ERROR :(((");
	printf("Ex05. Test_2 for true:    %s\n", ft_strstr(str05_test_haystack, str05_test2_needle) == strstr(str05_test_haystack, str05_test2_needle) ? "OK!" : "ERROR :(((");
	printf("Ex05. Test_3 for true:    %s\n", ft_strstr(str05_test_haystack, str05_test3_needle) == strstr(str05_test_haystack, str05_test3_needle) ? "OK!" : "ERROR :(((");
	printf("Ex05. Test_4 for true:    %s\n", ft_strstr(str05_test_haystack, str05_test4_needle) == strstr(str05_test_haystack, str05_test4_needle) ? "OK!" : "ERROR :(((");
	printf("Ex05. Test_5 for true:    %s\n\n", ft_strstr(str05_test_haystack, str05_test5_needle) == strstr(str05_test_haystack, str05_test5_needle) ? "OK!" : "ERROR :(((");

	//ex06
	char *str06_test1 = "abaa";
	char *str06_test2 = "abcd";
	char *str06_test3 = "abb";
	char *str06_test4 = "abb";
	char *str06_test5 = "abbc";
	char *str06_test6 = "/235486/";
	char *str06_test7 = "/235486;";
	char *str06_test8 = "";
	printf("Ex06. Test_1 for true:    %s\n", (ft_strcmp(str06_test1, str06_test2) == strcmp(str06_test1, str06_test2)) ? "OK!" : "ERROR :(((");
	printf("Ex06. Test_2 for true:    %s\n", (ft_strcmp(str06_test2, str06_test3) == strcmp(str06_test2, str06_test3)) ? "OK!" : "ERROR :(((");
	printf("Ex06. Test_3 for true:    %s\n", (ft_strcmp(str06_test3, str06_test4) == strcmp(str06_test3, str06_test4)) ? "OK!" : "ERROR :(((");
	printf("Ex06. Test_4 for true:    %s\n", (ft_strcmp(str06_test4, str06_test5) == strcmp(str06_test4, str06_test5)) ? "OK!" : "ERROR :(((");
	printf("Ex06. Test_5 for true:    %s\n", (ft_strcmp(str06_test6, str06_test7) == strcmp(str06_test6, str06_test7)) ? "OK!" : "ERROR :(((");
	printf("Ex06. Test_6 for true:    %s\n\n", (ft_strcmp(str06_test7, str06_test8) == strcmp(str06_test7, str06_test8)) ? "OK!" : "ERROR :(((");

	//ex07
	char *str07_test1 = "abaa";
	char *str07_test2 = "abcd";
	char *str07_test3 = "abb";
	char *str07_test4 = "abb";
	char *str07_test5 = "abbc";
	char *str07_test6 = "/235486/";
	char *str07_test7 = "/235486;";
	char *str07_test8 = "";
	printf("Ex07. Test_1 for true:    %s\n", (ft_strncmp(str07_test1, str07_test2, 2) == strncmp(str07_test1, str07_test2, 2)) ? "OK!" : "ERROR :(((");
	printf("Ex07. Test_2 for true:    %s\n", (ft_strncmp(str07_test2, str07_test3, 4) == strncmp(str07_test2, str07_test3, 4)) ? "OK!" : "ERROR :(((");
	printf("Ex07. Test_3 for true:    %s\n", (ft_strncmp(str07_test3, str07_test4, 0) == strncmp(str07_test3, str07_test4, 0)) ? "OK!" : "ERROR :(((");
	printf("Ex07. Test_4 for true:    %s\n", (ft_strncmp(str07_test4, str07_test5, 5) == strncmp(str07_test4, str07_test5, 5)) ? "OK!" : "ERROR :(((");
	printf("Ex07. Test_5 for true:    %s\n", (ft_strncmp(str07_test6, str07_test7, 6) == strncmp(str07_test6, str07_test7, 6)) ? "OK!" : "ERROR :(((");
	printf("Ex07. Test_6 for true:    %s\n\n", (ft_strncmp(str07_test7, str07_test8, 6) == strncmp(str07_test7, str07_test8, 6)) ? "OK!" : "ERROR :(((");

	return (0);
}
