# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: yizhang <yizhang@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2024/01/18 13:13:37 by yizhang       #+#    #+#                  #
#    Updated: 2024/02/26 12:12:38 by yizhang       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = ex01
CC = c++
FLAG = -Wall -Werror -Wextra -fsanitize=address
SRC = main.cpp Form.cpp Bureaucrat.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAG) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all

.PHONY: all clean