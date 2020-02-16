#include<stdio.h>

char    *ft_strcpy(char *dest, char *src)
{
	int i;
	
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
 		i++;
	}
	dest[i] = '\0';
	return dest;
}

char    *ft_strncpy(char *dst, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	while ( src[i] != 0 )
	{
		dst[i] = '\0';
		i++;
	}
	dst[i] = '\0';
	return dst;
}
char    *ft_strstr(char *str, char *to_find)
{
	    int start;
		int i;

		i = 0;
		start = 0;
		while (str[i] != '\0')
		{
			while (str[start+i] == to_find[i])
			{
				i++;
				if (to_find[i] == '\0')
					return &str[start];
			}
			start++;
		}
		return 0;
}

int ft_strcmp(char *str1, char *str2)
{
	    int i;

		i = 0;
		while (str1[i] == str2[i])
			i++;
		return ((str1[i] >str2[i]));
}

int    main()
{
	char test1[] = "c";
	char test2[] = "C";
	const char *a ="9";
	char *test =(char *) malloc ( 20*sizeof(char));
	char b[30] = "0";
	ft_strcpy(&a,&a);
	ft_strncpy(test,a,25);
	printf("%s\n%s\n%d\n%d\n",test1,test2,ft_strcmp(&b,a),strcmp(&test1,&test2));
	return 0;
}
