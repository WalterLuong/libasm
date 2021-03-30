# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wluong <wluong@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/25 16:34:08 by wluong            #+#    #+#              #
#    Updated: 2021/03/30 17:35:40 by wluong           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libasm.a

SRC		=	ft_strlen.s \
			ft_strcmp.s \
			ft_strcpy.s \
			ft_write.s

OBJS	= $(SRC:.s=.o)

AR		=	ar rcs
RM		=	rm -f
NASM	=	nasm
FLAGS	=	-f elf64
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror

%.o:		%.s
	$(NASM) $(FLAGS) -o $@ $<

all:	$(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	ranlib $(NAME)
	$(CC) $(CFLAGS) main.c -L -lasm $(NAME)


clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)
	$(RM) ./a.out 

re:		fclean all
