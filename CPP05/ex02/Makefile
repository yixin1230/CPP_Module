# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: yizhang <yizhang@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2024/01/18 13:13:37 by yizhang       #+#    #+#                  #
#    Updated: 2024/02/13 21:59:55 by yizhang       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = ex02
CC = c++
FLAG = -Wall -Werror -Wextra -fsanitize=address
SRC = main.cpp Aform.cpp Bureaucrat.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAG) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all

.PHONY: all clean