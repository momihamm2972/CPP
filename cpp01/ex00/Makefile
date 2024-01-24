# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/05 10:24:33 by momihamm          #+#    #+#              #
#    Updated: 2024/01/22 21:21:20 by momihamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BraiiiiiiinnnzzzZ
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
FILES = main.cpp        \
		newZombie.cpp   \
		randomChump.cpp \
		Zombie.cpp

OBJ = $(FILES:.cpp=.o)

all : $(NAME)

%.o : %.cpp Zombie.hpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(FILES) $(FLAGS) -o $(NAME)

clean :
		@rm -f $(OBJ)

fclean : clean
		@rm -f $(NAME)

re : fclean all