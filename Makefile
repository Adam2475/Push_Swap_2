# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/16 17:38:38 by adapassa          #+#    #+#              #
#    Updated: 2024/04/16 17:38:39 by adapassa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -g
LIB = libft.a

SRC = main.c parsing.c push_swap.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		@cd libft && $(MAKE) && mv $(LIB) ../
		$(CC) $(CFLAGS) $(SRC) $(LIB) -o $(NAME)

clean:
		@cd libft && $(MAKE) clean
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(LIB)
		$(RM) $(NAME)

re: fclean all