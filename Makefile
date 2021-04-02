# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/25 16:34:08 by wluong            #+#    #+#              #
#    Updated: 2021/04/02 12:43:14 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libasm.a

SRC		=	ft_strlen.s \
			ft_strcmp.s \
			ft_strcpy.s \
			ft_write.s \
			ft_read.s \
			ft_strdup.s

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
	@sleep 1
	@$(CC) $(CFLAGS) main.c -L -lasm $(NAME)
	@echo "\e[1;32mCompilation terminée !"
	@mv a.out run_test
	@sleep 0.5
	@echo "\e[1;33mLancez ./run_test"


clean:
	@echo "\e[0;31m[NETTOYAGE EN COURS ...]\e[0;m"
	@sleep 1
	$(RM) $(OBJS)

fclean:		clean
	@$(RM) $(NAME)
	@$(RM) ./run_test
	@echo "\e[1;32m[CLEAN] \e[0;m.o, run_test, libasm.a supprimés !"

re:		fclean all
