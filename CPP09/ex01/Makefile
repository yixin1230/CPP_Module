# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: yizhang <yizhang@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2024/02/13 23:11:20 by yizhang       #+#    #+#                  #
#    Updated: 2024/09/02 19:11:55 by yizhang       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = RPN
CC = c++
FLAG = -Wall -Werror -Wextra -std=c++11 -fsanitize=address
SRC = main.cpp RPN.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAG) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean:clean

re: clean all

.PHONY: all clean