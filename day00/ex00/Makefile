#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysavenko <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/24 17:19:12 by spetrenk          #+#    #+#              #
#    Updated: 2016/12/03 11:56:41 by ysavenko         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = megaphone

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = megaphone.o

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	clang++ -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

rmsh:
	rm *~
	rm \#*
	rm *.out
