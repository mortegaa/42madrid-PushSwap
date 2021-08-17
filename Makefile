# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mortega- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/30 23:52:56 by mortega-          #+#    #+#              #
#    Updated: 2021/08/14 09:58:48 by mortega-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	push_swap.c utils.c operations_1.c operations_2.c algorithm.c

OBJS	=	${SRCS:.c=.o}

Libdir	=	./srcs/LIBFT

libname	=	libft.a

Lib		=	${Libdir}/${libname}

NAME	=	push_swap

CFLAGS	=	-Wall -Werror -Wextra

.c.o:
		@gcc ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS} ${Lib}
			@gcc -o ${NAME} ${OBJS} ${Lib}

all:		${NAME}

$(Lib):
			@make -C ${Libdir} > /dev/null 2>&1

clean:
			rm -f ${OBJS}
			@make -s -C ${Libdir} clean

fclean:		clean
			rm -f $(NAME)
			@make -s -C ${Libdir} fclean

re:			fclean all

.PHONY:		all clean fclean re


