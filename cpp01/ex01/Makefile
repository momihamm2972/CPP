# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/19 12:56:46 by momihamm          #+#    #+#              #
#    Updated: 2024/01/19 16:53:29 by momihamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Moarbrainz
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
FILES = main.cpp        \
		Zombie.cpp		\
		zombieHorde.cpp

OBJ = $(FILES:.cpp=.o)

all : $(NAME)

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ) Zombie.hpp
	$(CC) $(FILES) $(FLAGS) -o $(NAME)

clean :
		@rm -f $(OBJ)

fclean : clean
		@rm -f $(NAME)

re : fclean all