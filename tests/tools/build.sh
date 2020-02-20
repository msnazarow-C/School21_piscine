#!/bin/sh


		echo building work/ex12/main
		gcc -Wall -Wextra -Werror stupidity.c work/ex12/ft_list_remove_if.c work/ex12/main.c -o work/ex12/main
	
		cd work/ex12; make; cd ../..;
	