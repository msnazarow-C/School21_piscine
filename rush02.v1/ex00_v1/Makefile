# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pvivian <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/15 11:50:50 by pvivian           #+#    #+#              #
#    Updated: 2020/02/15 18:49:48 by pvivian          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2
CFILES = srcs/*.c
OFILES = *.o
HEADER = -I includes
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(CFILES) $(HEADER)
	gcc $(OFILES) -o $(NAME)

clean:
	/bin/rm -f $(OFILES)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all