# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/25 18:34:51 by momihamm          #+#    #+#              #
#    Updated: 2024/10/26 17:38:19 by momihamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = easyfind
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