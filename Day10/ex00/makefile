# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/11 19:51:11 by sgertrud          #+#    #+#              #
#    Updated: 2020/02/11 21:38:39 by sgertrud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = srcs/
INCLUDES = includes
FUCTIONS = ft_putchar ft_putstr ft_strcmp ft_strlen ft_swap
SOURCES = $(patsubst %, %.c, $(FUCTIONS))
OBJECTS = $(patsubst %, %.o, $(FUCTIONS))

.PHONY: all clean fclean re

all:	
	@gcc -Wall -Wextra -Werror -c $(addprefix $(SRCS),$(SOURCES)) -I$(INCLUDES)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)
$(NAME):all
clean:
	@rm -f $(OBJECTS)
fclean: clean
	rm -f $(NAME)
re: fclean all
