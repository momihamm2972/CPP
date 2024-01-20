# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/19 17:21:54 by momihamm          #+#    #+#              #
#    Updated: 2024/01/19 17:59:58 by momihamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = HITHISISBRAIN
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
FILES = main.cpp

OBJ = $(FILES:.cpp=.o)

all : $(NAME)

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(FILES) $(FLAGS) -o $(NAME)

clean :
		@rm -f $(OBJ)

fclean : clean
		@rm -f $(NAME)

re : fclean all