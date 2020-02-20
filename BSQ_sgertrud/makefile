# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/19 22:35:45 by sgertrud          #+#    #+#              #
#    Updated: 2020/02/19 22:43:28 by sgertrud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= bsq
GCCFLAG	= -c -Wall -Wextra -Werror
SRC		= ./
INCLUDE	= .
OBJ		= $(SRC)main.o $(SRC)bsq_alg.o $(SRC)ft_free.o $(SRC)ft_list_clear.o \
		  $(SRC)ft_list.o $(SRC)change_pb.o $(SRC)max_count.o $(SRC)ft_strdup.o \
		  $(SRC)ft_putnbr.o $(SRC)ft_get_int_sympols.o $(SRC)make_tub.c $(SRC)reading.c
all: $(NAME)

main.o: main.c
	gcc $(GCCFLAG) -I $(INCLUDE) main.c
reading.c: reading.o
	gcc $(GCCFLAG) -I $(INCLUDE) reading.c
analyze.o: analyze.c
	gcc $(GCCFLAG) -I $(INCLUDE) analyze.c
ft_putstr.o: ft_putstr.c
	gcc $(GCCFLAG) -I $(INCLUDE) ft_putstr.c
read_file.o: read_file.c
	gcc $(GCCFLAG) -I $(INCLUDE) read_file.c
display_answer.o: display_answer.c
	gcc $(GCCFLAG) -I $(INCLUDE) display_answer.c
check.o: check.c
	gcc $(GCCFLAG) -I $(INCLUDE) check.c
map2.o: map2.c
	gcc $(GCCFLAG) -I $(INCLUDE) map2.c
ft_atoi.o: ft_atoi.c
	gcc $(GCCFLAG) -I $(INCLUDE) ft_atoi.c
ft_putnbr.o: ft_putnbr.c
	gcc $(GCCFLAG) -I $(INCLUDE) ft_putnbr.c

$(OBJ): bsq.h

$(NAME): $(OBJ)
	gcc $(OBJ) -o $(NAME)
clean:
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
