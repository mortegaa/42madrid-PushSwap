# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mortega- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/30 23:52:56 by mortega-          #+#    #+#              #
#    Updated: 2021/08/30 12:34:46 by mortega-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PS_SRCS	=	push_swap.c stack_actions.c utils.c operations_1.c operations_2.c algorithm.c

PS_OBJS	=	${PS_SRCS:.c=.o}

CH_SRCS =	checker.c stack_actions.c utils.c operations_1.c operations_2.c

CH_OBJS =	${CH_SRCS:.c=.o}

Libdir	=	./srcs/LIBFT

libname	=	libft.a

Gnldir	=	./srcs/GNL

gnlname	=	gnl.a

Gnl	=	${Gnldir}/${gnlname}

Lib	=	${Libdir}/${libname}

NAME	=	push_swap

CH_NAME	=	checker

CFLAGS	=	-Wall -Werror -Wextra

.c.o:
		@gcc ${CFLAGS} -c $< -o ${<:.c=.o}

all:		${NAME} ${CH_NAME}

$(NAME):	${PS_OBJS} ${Lib}
			@gcc -o ${NAME} ${PS_OBJS} ${Lib}

$(CH_NAME):	${CH_OBJS} ${Lib} ${Gnl}
		@gcc -o ${CH_NAME} ${CH_OBJS} ${Lib} ${Gnl}

$(Lib):
		@make -C ${Libdir}

$(Gnl):
		@make -C ${Gnldir} > /dev/null 2>&1

ps:		${NAME}

checker:	${CH_NAME}

clean:
			rm -f ${PS_OBJS}
			rm -f ${CH_OBJS}
			@make -s -C ${Libdir} clean
			@make -s -C ${Gnldir} clean

fclean:		clean
			rm -f $(NAME)
			rm -f ${CH_NAME}
			@make -s -C ${Libdir} fclean
			@make -s -C ${Gnldir} fclean

re:			fclean all

.PHONY:		all clean fclean re


