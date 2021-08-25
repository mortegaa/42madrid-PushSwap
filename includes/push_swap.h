/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 02:31:49 by mortega-          #+#    #+#             */
/*   Updated: 2021/08/25 15:58:21 by mortega-         ###   ########.fr       */
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

int		short_alg_3(t_num *a, int max);
int		short_alg_5(t_num *a, t_num *b, int max);
int		algorithm(t_num *a, t_num *b);
/*
**	utils.c functions
*/

int		checker_stack(t_num *a, t_num *b);
int		find_and_catch(t_num *a, t_num *b, int max);
int		search_max(t_num *a);
int		search_min(t_num *a);
void	message(char *str);

/*
**	Operations functions
*/

int		sa(t_num *a);
int		sb(t_num *b);
int		ss(t_num *a, t_num *b);
int		pa(t_num *a, t_num *b);
int		pb(t_num *a, t_num *b);
int		ra(t_num *a);
int		rb(t_num *b);
int		rr(t_num *a, t_num *b);
int		rra(t_num *a);
int		rrb(t_num *b);
int		rrr(t_num *a, t_num *b);

#endif
