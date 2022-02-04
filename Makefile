# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/02 16:47:29 by nburat-d          #+#    #+#              #
#    Updated: 2022/02/04 16:13:11 by nburat-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
EXEC = push_swap
SRCS = ./main.c \
	./srcs/parsing.c \
	./libft/ft_lstnew.c \
	./libft/ft_lstadd_back.c \
	./libft/ft_lstlast.c \
	./libft/ft_atoi.c \
	./libft/ft_putnbr.c \
	./libft/ft_putchar.c \
	./libft/ft_putstr.c \
	./srcs/swap_function.c \
	./srcs/push_function.c \
	./srcs/rotate_function.c \
	./srcs/rev_rotate_function.c \
	./srcs/check.c

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

