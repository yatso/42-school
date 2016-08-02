# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yso <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/26 19:33:09 by yso               #+#    #+#              #
#    Updated: 2016/07/26 19:33:12 by yso              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c \
	srcs/ft_swap.c
INC = includes/

all: $(NAME)

.PHONY: clean fclean re

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC) $(INC)
	ar rc $(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
	ranlib $(NAME)

clean: 
	/bin/rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

fclean:
	/bin/rm -f $(NAME)

re: fclean all