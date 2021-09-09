/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 02:31:49 by mortega-          #+#    #+#             */
/*   Updated: 2021/09/09 18:28:08 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../srcs/LIBFT/libft.h"
# include "../srcs/GNL/get_next_line.h"

typedef struct s_num
{
	int		len;
	int		*stack;
}			t_num;

void	ft_leaks(void);

/*
**	PushSwap functions
*/

void	short_alg_3(t_num *a, int max);
void	short_alg_5(t_num *a, t_num *b);
void	algorithm(t_num *a, t_num *b);
void	find_and_catch(t_num *a, t_num *b, int max);

/*
**	CheCker functions
*/

void	order_stack(t_num *a, t_num *b);
void	which_operation(t_num *a, t_num *b, char *line);

/*
**	check_actions functions
*/

void	print_stack(t_num a, t_num b);
int		fill_stack(t_num *a, char **argv, int len);
int		check_input(char **args);
int		check_stack(t_num *a, t_num *b);

/*
**	utils.c functions
*/

int		search_max(t_num *a);
int		search_min(t_num *a);
void	exit_mess(char *str);

/*
**	Operations functions
*/

int		sa(t_num *a, char c);
int		sb(t_num *b, char c);
int		ss(t_num *a, t_num *b, char c);
int		pa(t_num *a, t_num *b, char c);
int		pb(t_num *a, t_num *b, char c);
int		ra(t_num *a, char c);
int		rb(t_num *b, char c);
int		rr(t_num *a, t_num *b, char c);
int		rra(t_num *a, char c);
int		rrb(t_num *b, char c);
int		rrr(t_num *a, t_num *b, char c);

#endif
