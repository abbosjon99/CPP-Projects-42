# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akeldiya <akeldiya@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/28 00:35:32 by akeldiya          #+#    #+#              #
#    Updated: 2024/10/28 20:58:41 by akeldiya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = source/main.cpp source/Contact.cpp source/PhoneBook.cpp
OBJ = $(SRC:.cpp=.o)
CC = g++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = pb

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re