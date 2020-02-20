# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/11 19:51:11 by sgertrud          #+#    #+#              #
#    Updated: 2020/02/19 23:18:07 by sgertrud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRCS = srcs/
INCLUDE = includes
FUCTIONS = main bsq_alg ft_free ft_list_clear ft_list change_pb max_count \
		ft_strdup ft_putnbr get_int_symbols make_tab reading
SOURCES = $(patsubst %, %.c, $(FUCTIONS))
OBJECTS = $(patsubst %, %.o, $(FUCTIONS))
GCCFLAG = -c -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

main.o: main.c
    gcc $(GCCFLAG) -I$(INCLUDE) main.c
bsq_alg.c: bsq_alg.o
    gcc $(GCCFLAG) -I$(INCLUDE) bsq_alg.c
ft_free.o: ft_free.c
    gcc $(GCCFLAG) -I$(INCLUDE) ft_free.c
ft_list_clear.o: ft_list_clear.c
    gcc $(GCCFLAG) -I$(INCLUDE) ft_list_clear.c
ft_list.o: ft_list.c
    gcc $(GCCFLAG) -I$(INCLUDE) ft_list.c
change_pb.o: change_pb.c
    gcc $(GCCFLAG) -I$(INCLUDE) change_pb.c
max_count.o: max_count.c
    gcc $(GCCFLAG) -I$(INCLUDE) max_count.c
ft_strdup.o: ft_strdup.c
    gcc $(GCCFLAG) -I$(INCLUDE) ft_strdup.c
ft_putnbr.o: ft_putnbr.c
    gcc $(GCCFLAG) -I$(INCLUDE) ft_putnbr.c
get_int_symbols.o: get_int_symbols.c
    gcc $(GCCFLAG) -I$(INCLUDE) get_int_symbols.c
make_tab.o: make_tab.c
    gcc $(GCCFLAG) -I$(INCLUDE) make_tab.c
reading.o: reading.c
    gcc $(GCCFLAG) -I$(INCLUDE) reading.c

$(OBJ): bsq.h

$(NAME): $(OBJECTS)
	gcc -Wall -Wextra -Werror -c $(addprefix $(SRCS),$(SOURCES)) -I$(INCLUDES)
	gcc -Wall -Wextra -Werror -o $(NAME) $(OBJECTS) -I$(INCLUDES)
clean:
	rm -f $(OBJECTS)
fclean: clean
	rm -f $(NAME)
re: fclean all
