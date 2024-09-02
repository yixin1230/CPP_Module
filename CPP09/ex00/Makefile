# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: yizhang <yizhang@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2024/02/13 23:11:20 by yizhang       #+#    #+#                  #
#    Updated: 2024/09/01 20:14:09 by yizhang       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = btc
CC = c++
FLAG = -Wall -Werror -Wextra -std=c++11 -fsanitize=address
SRC = main.cpp BitcoinExchange.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAG) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean:clean

re: clean all

.PHONY: all clean