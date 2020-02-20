# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/11 19:51:11 by sgertrud          #+#    #+#              #
#    Updated: 2020/02/15 23:22:36 by sgertrud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
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
