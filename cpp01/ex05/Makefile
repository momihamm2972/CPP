# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/21 02:04:01 by momihamm          #+#    #+#              #
#    Updated: 2024/01/22 21:22:24 by momihamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
FILES = main.cpp  \
		Harl.cpp 

OBJ = $(FILES:.cpp=.o)

all : $(NAME)

%.o : %.cpp Harl.hpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(FILES) $(FLAGS) -o $(NAME)

clean :
		@rm -f $(OBJ)

fclean : clean
		@rm -f $(NAME)

re : fclean all