# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/30 14:48:59 by momihamm          #+#    #+#              #
#    Updated: 2024/01/05 17:20:23 by momihamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
FILES = PhoneBook.cpp \
		Contact.cpp

OBJ = $(FILES:.cpp=.o)

all : $(NAME)

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ) PhoneBook.hpp Contact.hpp
	$(CC) $(FILES) $(FLAGS) -o $(NAME)

clean :
		@rm -f $(OBJ)

fclean : clean
		@rm -f $(NAME)

re : fclean all