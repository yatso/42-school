# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cyildiri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/31 18:59:41 by cyildiri          #+#    #+#              #
#    Updated: 2016/07/31 19:07:32 by cyildiri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2
SRC = rush_01_out.c rush_00_out.c rush_03_out.c ft_find_dimensions.c ft_rush_name.c whatrush.c rush_02_out.c rush_04_out.c
OFILES = rush_01_out.o rush_00_out.o rush_03_out.o ft_find_dimensions.o ft_rush_name.o whatrush.o rush_02_out.o rush_04_out.o
INCLUDES = rush_ref_output.h

all: $(NAME)
	
$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC) $(INCLUDES)
	gcc -Wall -Wextra -Werror $(OFILES) -o $(NAME)

clean:
	rm -r $(OFILES)

fclean: clean
	rm $(NAME)

re: fclean all


