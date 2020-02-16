#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <ctype.h>
#include "ex08/ft_strupcase.c"
#include "ex09/ft_strlowcase.c"
#include "ex10/ft_strcapitalize.c"
#include "ex11/ft_str_is_alpha.c"
#include "ex12/ft_str_is_numeric.c"
#include "ex13/ft_str_is_lowercase.c"
#include "ex14/ft_str_is_uppercase.c"

#include "ex16/ft_strcat.c"

char	*ft_strupcase(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);
int		ft_str_is_alpha(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_uppercase(char *str);

char	*ft_strcat(char *dest, char *src);

int main() {
	char    buffer[128] = {0};

	//ex08
	printf("\nEx08. Converting to an upper case:\n");
    sprintf(buffer, "lOwEr AnD uPpEr CaSeS R0a1N2d3o4M");
    printf("\"lOwEr AnD uPpEr CaSeS R0a1N2d3o4M\" --> \"%s\"\n\n",  ft_strupcase(buffer));
	
	//ex09
	printf("Ex09. Converting to a lower case:\n");
    sprintf(buffer, "lOwEr AnD uPpEr CaSeS R0a1N2d3o4M");
    printf("\"lOwEr AnD uPpEr CaSeS R0a1N2d3o4M\" --> \"%s\"\n\n",  ft_strlowcase(buffer));

	//ex10
	printf("Ex10. Capitalizing:\n");
	sprintf(buffer, "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un");
    printf("%s\n", buffer);
    printf("%s\n\n", ft_strcapitalize(buffer));
    sprintf(buffer, "\\wHA t THe f,Uck i_s\ttH!s __string++?!!");
    printf("%s\n", buffer);
    printf("%s\n\n", ft_strcapitalize(buffer));

	//ex11
	char* str11_test1 = "abdbdah";
	char* str11_test2 = "AbdCdah";
	char* str11_test3 = "abdb dah";
	char* str11_test4 = " abdb1+dah";
	printf("Ex11. Test_1:    %s\n", (ft_str_is_alpha(str11_test1) == 1) ? "OK!" : "ERROR :(((");
	printf("Ex11. Test_2:    %s\n", (ft_str_is_alpha(str11_test2) == 1) ? "OK!" : "ERROR :(((");
	printf("Ex11. Test_3:    %s\n", (ft_str_is_alpha(str11_test3) == 0) ? "OK!" : "ERROR :(((");
	printf("Ex11. Test_4:    %s\n\n", (ft_str_is_alpha(str11_test4) == 0) ? "OK!" : "ERROR :(((");

	//ex12
	char* str12_test1 = "124124";
	char* str12_test2 = "214 ";
	char* str12_test3 = "ab2143sdgf";
	char* str12_test4 = "";
	printf("Ex12. Test_1:    %s\n", (ft_str_is_numeric(str12_test1) == 1) ? "OK!" : "ERROR :(((");
	printf("Ex12. Test_2:    %s\n", (ft_str_is_numeric(str12_test2) == 0) ? "OK!" : "ERROR :(((");
	printf("Ex12. Test_3:    %s\n", (ft_str_is_numeric(str12_test3) == 0) ? "OK!" : "ERROR :(((");
	printf("Ex12. Test_4:    %s\n\n", (ft_str_is_numeric(str12_test4) == 1) ? "OK!" : "ERROR :(((");
	
	//ex13
	char* str13_test1 = "abdbdah";
	char* str13_test2 = "AbdCdah";
	char* str13_test3 = "";
	char* str13_test4 = "abdb1+dah";
	printf("Ex13. Test_1:    %s\n", (ft_str_is_lowercase(str13_test1) == 1) ? "OK!" : "ERROR :(((");
	printf("Ex13. Test_2:    %s\n", (ft_str_is_lowercase(str13_test2) == 0) ? "OK!" : "ERROR :(((");
	printf("Ex13. Test_3:    %s\n", (ft_str_is_lowercase(str13_test3) == 1) ? "OK!" : "ERROR :(((");
	printf("Ex13. Test_4:    %s\n\n", (ft_str_is_lowercase(str13_test4) == 0) ? "OK!" : "ERROR :(((");
	
	//ex14
	char* str14_test1 = "ABCD";
	char* str14_test2 = "AbdCdah";
	char* str14_test3 = "";
	char* str14_test4 = " FAF+1FSAD";
	printf("Ex14. Test_1:    %s\n", (ft_str_is_uppercase(str14_test1) == 1) ? "OK!" : "ERROR :(((");
	printf("Ex14. Test_2:    %s\n", (ft_str_is_uppercase(str14_test2) == 0) ? "OK!" : "ERROR :(((");
	printf("Ex14. Test_3:    %s\n", (ft_str_is_uppercase(str14_test3) == 1) ? "OK!" : "ERROR :(((");
	printf("Ex14. Test_4:    %s\n\n", (ft_str_is_uppercase(str14_test4) == 0) ? "OK!" : "ERROR :(((");
	
	//ex15
//	char* str15_test1 = "ABCD";
//	char* str15_test2 = "";
//	char* str15_test3 = " ";
//	char test4[10] = "  ";
	int i = 0;
	while (i <= 2)
	{
		test4[i] = i + 1;
		i++;
	}
//	printf("Ex15. Test_1:    %s\n", (ft_str_is_printable(str15_test1) == 1) ? "OK!" : "ERROR :(((");
//	printf("Ex15. Test_2:    %s\n", (ft_str_is_printable(str15_test2) == 1) ? "OK!" : "ERROR :(((");
//	printf("Ex15. Test_3:    %s\n", (ft_str_is_printable(str15_test3) == 1) ? "OK!" : "ERROR :(((");
//	printf("Ex15. Test_4:    %s\n\n", (ft_str_is_printable(test4) == 0) ? "OK!" : "ERROR :(((");

	//ex16
	char str16_part1[100] = "Hello, I'm IMhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh";
	str16_part1[11] = '\0';
	char* str16_part2 = "working ";
	ft_strcat(str16_part1, str16_part2);
	printf("Ex16. Adding strings.\n");
	//printf("%d\n", (int)strlen(str16_part1));
	for (i = 0; i < 19; i++)
		printf("%c", str16_part1[i]);
	if (str16_part1[i] == '\0')
		printf("properly!\n");
	else
		printf("IMPROPERLY!!! :(((\n");


	return (0);
}
