# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: yizhang <yizhang@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2023/12/22 18:22:52 by yizhang       #+#    #+#                  #
#    Updated: 2024/01/02 18:49:10 by yizhang       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = Polymorphism
CC = c++
FLAG = -Wall -Werror -Wextra -std=c++98 -fsanitize=address
SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp

all:$(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAG) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all

.PHONY: all clean
