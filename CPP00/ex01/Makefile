# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: yizhang <yizhang@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2023/09/26 09:49:40 by yizhang       #+#    #+#                  #
#    Updated: 2023/09/26 09:58:05 by yizhang       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = phone_book
CC = g++
FLAGS = -Wall -Werror -Wextra
SRC = phone_book.cpp

all: $(NAME)

$(NAME): $(SRC)
		$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

.PHONY: all clean fclean re
