# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: yizhang <yizhang@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2023/11/08 10:57:03 by yizhang       #+#    #+#                  #
#    Updated: 2023/12/22 17:36:49 by yizhang       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = This_is_Brain
CC = c++
FLAG = -Wall -Werror -Wextra -std=c++98 #-fsanitize=address
SRC = main.cpp

all:$(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAG) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all

.PHONY: all clean