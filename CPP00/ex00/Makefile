# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: yizhang <yizhang@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2023/09/21 15:12:20 by yizhang       #+#    #+#                  #
#    Updated: 2023/09/26 09:49:03 by yizhang       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CC = g++
FLAGS = -Wall -Werror -Wextra
SRC = megaphone.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

.PHONY: all clean fclean re
