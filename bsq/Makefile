# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yso <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/01 10:33:40 by yso               #+#    #+#              #
#    Updated: 2016/08/01 10:36:34 by yso              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		BSQ

HPATH =		ft.h 

SRCS =		main.c \
				libft.c \

FLAGS =		-Wall -Wextra -Werror

all:		$(NAME)

$(NAME):
		gcc -I$(HPATH)$(FLAGS) -o $@ $(SRCS)

clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all