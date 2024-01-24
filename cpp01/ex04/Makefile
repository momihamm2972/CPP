# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/19 22:39:41 by momihamm          #+#    #+#              #
#    Updated: 2024/01/22 21:22:01 by momihamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Sedisforlosers
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
FILES = main.cpp  \
		mySed.cpp

OBJ = $(FILES:.cpp=.o)

all : $(NAME)

%.o : %.cpp mySed.hpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(FILES) $(FLAGS) -o $(NAME)

clean :
		@rm -f $(OBJ)

fclean : clean
		@rm -f $(NAME)

re : fclean all