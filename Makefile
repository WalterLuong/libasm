# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wluong <wluong@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/25 16:34:08 by wluong            #+#    #+#              #
#    Updated: 2021/03/25 16:45:24 by wluong           ###   ########.fr        #
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

%.o:		%.s
	$(NASM) $(FLAGS) $< -o $@

all:	$(NAME)

$(NAME):	$(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)
	$(RM) $(SRCS_O)

fclean:		clean
	$(RM) $(NAME)

re:		fclean all
