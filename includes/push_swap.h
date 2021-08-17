/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 02:31:49 by mortega-          #+#    #+#             */
/*   Updated: 2021/08/14 14:43:55 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../srcs/LIBFT/libft.h"
#include <stdio.h>
typedef struct		s_num
{
	int				len;
	int				*stack;
}					t_num;

/*
**	Push_swap.c functions
*/

char	checker_input(char **args, int *num);
int		fill_stack(t_num *a, char **argv);
void	print_stack(t_num a, t_num b);

int		algorithm(t_num *a, t_num *b, int max);
/*
**	utils.c functions
*/

void	message(char *str);

/*
**	Operations functions
*/

int		s(t_num *a);
int		ss(t_num *a, t_num *b);
int		p(t_num *a, t_num *b);
int		r(t_num *a);
int		rr(t_num *a, t_num *b);
int		rra(t_num *a);
int		rrr(t_num *a, t_num *b);

#endif
