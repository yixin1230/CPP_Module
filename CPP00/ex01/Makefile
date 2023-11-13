# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: yizhang <yizhang@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2023/09/26 09:49:40 by yizhang       #+#    #+#                  #
#    Updated: 2023/11/13 13:19:35 by yizhang       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = phone_book
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRC = PhoneBook.cpp function.cpp main.cpp

all: $(NAME)

$(NAME): $(SRC)
		$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all

.PHONY: all clean
