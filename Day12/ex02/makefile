# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/11 19:51:11 by sgertrud          #+#    #+#              #
#    Updated: 2020/02/13 11:38:35 by sgertrud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail
SRCS = srcs/
INCLUDES = includes
FUCTIONS = *
SOURCES = $(patsubst %, %.c, $(FUCTIONS))
OBJECTS = $(patsubst %, %.o, $(FUCTIONS))

.PHONY: all clean fclean re

all: $(NAME) clean
	
$(NAME):
	@gcc -Wall -Wextra -Werror -c $(addprefix $(SRCS),$(SOURCES)) -I$(INCLUDES)
	@gcc -Wall -Wextra -Werror -o $(NAME) $(OBJECTS) -I$(INCLUDES)
clean:
	@rm -f $(OBJECTS)
fclean: clean
	@rm -f $(NAME)
re: fclean all
