# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mortega- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/02 08:44:36 by mortega-          #+#    #+#              #
#    Updated: 2021/08/30 12:32:14 by mortega-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Libdir	=	../LIBFT/ft_str

SRCS 	= 	get_next_line.c ft_count_lines.c ${Libdir}len.c ${Libdir}join.c ../LIBFT/ft_substr.c ${Libdir}dup.c ${Libdir}chr.c

OBJS 	= 	${SRCS:.c=.o}

NAME 	=	 gnl.a

CFLAGS 	= 	-Wall -Werror -Wextra -D BUFFER_SIZE=9999

.c.o:
			gcc ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			ar -rc ${NAME} ${OBJS}
			ranlib ${NAME}

all:		${NAME}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
		
