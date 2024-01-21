# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/19 22:39:41 by momihamm          #+#    #+#              #
#    Updated: 2024/01/21 01:59:08 by momihamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Sedisforlosers
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
FILES = main.cpp  \
		mySed.cpp 

OBJ = $(FILES:.cpp=.o)

all : $(NAME)

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ) mySed.hpp
	$(CC) $(FILES) $(FLAGS) -o $(NAME)

clean :
		@rm -f $(OBJ)

fclean : clean
		@rm -f $(NAME)

re : fclean all