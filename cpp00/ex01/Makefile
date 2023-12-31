# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/30 14:48:59 by momihamm          #+#    #+#              #
#    Updated: 2023/12/31 11:48:01 by momihamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
FILES = phonebook.cpp \
		Contact.cpp

OBJ = $(FILES:.cpp=.o)

all : $(NAME)

%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ) phonebook.hpp Contact.hpp
	$(CC) $(FILES) $(FLAGS) -o $(NAME)

clean :
		@rm -f $(OBJ)

fclean : clean
		@rm -f $(NAME)

re : fclean all