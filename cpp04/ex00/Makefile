# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/28 00:08:27 by momihamm          #+#    #+#              #
#    Updated: 2024/01/28 22:16:56 by momihamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Polymorphism
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
FILES = $(wildcard *.cpp)
INC = $(wildcard *.hpp)

OBJ = $(FILES:.cpp=.o)

all : $(NAME)

%.o : %.cpp $(INC)
	$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(FILES) $(FLAGS) -o $(NAME)

clean :
		@rm -f $(OBJ)

fclean : clean
		@rm -f $(NAME)

re : fclean all