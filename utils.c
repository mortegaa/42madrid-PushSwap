/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 00:36:50 by mortega-          #+#    #+#             */
/*   Updated: 2021/08/25 16:43:45 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	message(char *str)
{
	ft_putstr_fd(str, 1);
}

int	find_and_catch(t_num *a, t_num *b, int max)
{
	int i;
	int	cont;

	i = -1;
	cont = 0;
	while (++i < a->len)
		if (a->stack[i] == max)
			break ;
	printf("alen: %d |%d|\n", a->len, i);
	//sleep(1);
	if (i++ <= a->len / 2)
		while (--i >= 0)
			cont += rra(a);
	else if (i > a->len / 2 && i < a->len)
		while ((a->len - ++i) >= 0)
			cont += ra(a);
	checker_stack(a, b);
	return (cont);
}

int	search_max(t_num *a)
{
	int	i;
	int	max;

	max = -2147483648;
	i = -1;
	while (++i < a->len)
		if (a->stack[i] > max)
			max = a->stack[i];
	return (max);
}

int	search_min(t_num *a)
{
	int	i;
	int	min;

	min = 2147483647;
	i = -1;
	while (++i < a->len)
		if (a->stack[i] < min)
			min = a->stack[i];
	return (min);
}

int		rrr(t_num *a, t_num *b)
{
	int i;
	int c;

	i = -1;
	while (++i < a->len - 1)
	{
		c = a->stack[i];
		a->stack[i] = a->stack[i + 1];
		a->stack[i + 1] = c;
	}
	i = -1;
	while (++i < b->len - 1)
	{
		c = b->stack[i];
		b->stack[i] = b->stack[i + 1];
		b->stack[i + 1] = c;
	}
	printf("rrr\n");
	return (1);
}
