# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wluong <wluong@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/25 16:34:08 by wluong            #+#    #+#              #
#    Updated: 2021/03/29 11:59:39 by wluong           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libasm.a

SRC		=	ft_strlen.s

SRCS_O	=	ft_strlen.o

OBJS	= $(SRC:.s=.o)

AR		=	ar rcs
RM		=	rm -f
NASM	=	nasm
FLAGS	=	-f macho64
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror

%.o:		%.s
	$(NASM) $(FLAGS) $< -o $@

all:	$(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	$(CC) $(CFLAGS) main.c -o $(NAME)
	ranlib $(NAME)

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)
	$(RM) ./a.out 

re:		fclean all
