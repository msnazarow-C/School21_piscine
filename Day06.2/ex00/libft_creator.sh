# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/05 12:55:46 by sgertrud          #+#    #+#              #
#    Updated: 2020/02/05 12:57:19 by sgertrud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c *.c
ar rc libft.a *.o
runlib 