# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yso <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/28 13:48:09 by yso               #+#    #+#              #
#    Updated: 2016/07/28 13:48:13 by yso              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_display_file.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC)
	gcc -o $(NAME) ft_display_file.o

clean:
	/bin/rm -f ft_display_file.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
