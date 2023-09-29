# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: yizhang <yizhang@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2023/09/26 09:49:40 by yizhang       #+#    #+#                  #
#    Updated: 2023/09/29 14:08:49 by yizhang       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = phone_book
CC = g++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRC = phonebook.cpp function.cpp main.cpp

all: $(NAME)

$(NAME): $(SRC)
		$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

.PHONY: all clean
