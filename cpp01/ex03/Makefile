# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/19 18:00:10 by momihamm          #+#    #+#              #
#    Updated: 2024/01/22 21:20:45 by momihamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Unnecessaryviolence
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
FILES = main.cpp   \
		HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp \

OBJ = $(FILES:.cpp=.o)

all : $(NAME)

%.o : %.cpp Weapon.hpp HumanA.hpp HumanB.hpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ) 
	$(CC) $(FILES) $(FLAGS) -o $(NAME)

clean :
		@rm -f $(OBJ)

fclean : clean
		@rm -f $(NAME)

re : fclean all