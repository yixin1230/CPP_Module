# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: yizhang <yizhang@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2024/02/13 23:11:20 by yizhang       #+#    #+#                  #
#    Updated: 2024/02/22 16:56:55 by yizhang       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = ex00
CC = c++
FLAG = -Wall -Werror -Wextra #-fsanitize=address
SRC = main.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAG) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean:clean

re: clean all

.PHONY: all clean