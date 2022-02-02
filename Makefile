# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/02 16:47:29 by nburat-d          #+#    #+#              #
#    Updated: 2022/02/02 18:35:07 by nburat-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
EXEC = push_swap
SRCS = ./main.c \
	./srcs/parsing.c \

INCLUDES = ./include/
OBJS = ${SRCS:.c=.o}

all : MAKELIBFT $(EXEC)

$(EXEC) : $(OBJS)
	$(CC) $(CFLAGS) -L ./libft/ $^ -o $@ -lft -g

MAKELIBFT :
	make  bonus -C ./libft/

.o : .c
		$(CC) $(CFLAGS) -L ./libft/ -c $< -o $@ -I $(INCLUDES) -lft -g

clean :
	rm -f $(OBJS)
	make clean -C ./libft/

fclean : clean
	rm -f $(EXEC)
	make fclean -C ./libft/


re : fclean all

.PHONY : all clean fclean re

