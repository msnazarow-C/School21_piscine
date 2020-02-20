# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/19 22:35:45 by sgertrud          #+#    #+#              #
#    Updated: 2020/02/19 23:36:34 by sgertrud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= bsq
GCCFLAG	= -c -Wall -Wextra -Werror
SRC		= ./
INCLUDE	= .
OBJ		= $(SRC)main.o $(SRC)bsq_alg.o $(SRC)ft_free.o $(SRC)ft_list_clear.o \
		  $(SRC)ft_list.o $(SRC)change_pb.o $(SRC)max_count.o $(SRC)ft_strdup.o \
		  $(SRC)ft_putnbr.o $(SRC)get_int_symbols.o $(SRC)make_tab.o $(SRC)reading.o
all: $(NAME)

main.o: main.c
	gcc $(GCCFLAG) -I $(INCLUDE) main.c
bsq_alg.o: bsq_alg.c
	gcc $(GCCFLAG) -I $(INCLUDE) bsq_alg.c
ft_free.o: ft_free.c
	gcc $(GCCFLAG) -I $(INCLUDE) ft_free.c
ft_list_clear.o: ft_list_clear.c
	gcc $(GCCFLAG) -I $(INCLUDE) ft_list_clear.c
ft_list.o: ft_list.c
	gcc $(GCCFLAG) -I $(INCLUDE) ft_list.c
change_pb.o: change_pb.c
	gcc $(GCCFLAG) -I $(INCLUDE) change_pb.c
max_count.o: max_count.c
	gcc $(GCCFLAG) -I $(INCLUDE) max_count.c
ft_strdup.o: ft_strdup.c
	gcc $(GCCFLAG) -I $(INCLUDE) ft_strdup.c
ft_putnbr.o: ft_putnbr.c
	gcc $(GCCFLAG) -I $(INCLUDE) ft_putnbr.c
get_int_symbols.o: get_int_symbols.c
	gcc $(GCCFLAG) -I $(INCLUDE) get_int_symbols.c
make_tab.o: make_tab.c
	gcc $(GCCFLAG) -I $(INCLUDE) make_tab.c
reading.o: reading.c
	gcc $(GCCFLAG) -I $(INCLUDE) reading.c

$(OBJ): bsq.h

$(NAME): $(OBJ)
	gcc $(OBJ) -o $(NAME)
clean:
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
