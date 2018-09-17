# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/13 15:43:51 by jeguglie          #+#    #+#              #
#    Updated: 2018/09/17 12:49:04 by jeguglie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
O = *.o
C = *.c
RM = rm -f
SRC = ft_putchar.c ft_putstr.c ft_strlen.c ft_swap.c ft_strcmp

all:
	@gcc -c $(C) 
	@ar rc $(NAME) $(O)

clean:
	@$(RM) $(O)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
