#include "unistd.h"
#include "time.h"
#include "stdio.h"
#include "fcntl.h"

int main()
{
	clock_t t = clock();
	char a[10000];
	int i;

	i = 0;
	int f = open("map",O_RDONLY);
	while (read(f,&a[i],1) >0)
		i++;
		write(1,&a,i);
	t = ((clock() - t)* 1000)/CLOCKS_PER_SEC;
	printf("%lu", t);
}
