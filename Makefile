# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wluong <wluong@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/25 16:34:08 by wluong            #+#    #+#              #
#    Updated: 2021/03/30 23:51:46 by wluong           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libasm.a

SRC		=	ft_strlen.s \
			ft_strcmp.s \
			ft_strcpy.s \
			ft_write.s \
			ft_read.s

OBJS	= $(SRC:.s=.o)

AR		=	ar rcs
RM		=	rm -f
NASM	=	nasm
FLAGS	=	-f elf64
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror

%.o:		%.s
	@$(NASM) $(FLAGS) -o $@ $<

all:	$(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "\e[0;31mCompilation..."
	@$(CC) $(CFLAGS) main.c -L -lasm $(NAME)
	@echo "\e[1;32mCOmpilation terminée !"
	@mv a.out run_test
	@echo "\e[1;33mLancez ./run_test"


clean:
	@$(RM) $(OBJS)

fclean:		clean
	@$(RM) $(NAME)
	@$(RM) ./run_test

re:		fclean all
