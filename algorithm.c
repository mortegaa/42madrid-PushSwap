/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 09:03:07 by mortega-          #+#    #+#             */
/*   Updated: 2021/09/09 19:18:09 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	short_alg_3(t_num *a, int max)
{
	if (a->len == 2)
		sa(a, 1);
	if (a->len == 3)
	{
		if (a->stack[2] == max && a->stack[1] > a->stack[0])
		{
			ra(a, 1);
			sa(a, 1);
		}
		else if (a->stack[2] == max && a->stack[1] < a->stack[0])
			ra(a, 1);
		else if (a->stack[1] == max && a->stack[2] > a->stack[0])
			rra(a, 1);
		else if (a->stack[1] == max && a->stack[2] < a->stack[0])
		{
			rra(a, 1);
			sa(a, 1);
		}
		else if (a->stack[0] == max && a->stack[1] < a->stack[2])
			sa(a, 1);
	}
}

void	short_alg_5(t_num *a, t_num *b)
{
	while (a->len > 3)
		find_and_catch(a, b, search_min(a));
	short_alg_3(a, search_max(a));
	while (b->len)
		pa(a, b, 1);
}

void	find_and_catch(t_num *a, t_num *b, int max)
{
	int	i;

	i = -1;
	while (++i < a->len)
		if (a->stack[i] == max)
			break ;
	if (i == a->len)
		return ;
	if (++i <= a->len / 2)
		while (--i >= 0)
			rra(a, 1);
	else if (i > a->len / 2 && i < a->len)
		while ((a->len - ++i) >= 0)
			ra(a, 1);
	pb(a, b, 1);
}

t_num	normalized_stack(t_num *a)
{
	t_num	normi;
	int		k;
	int		min;
	int		i;
	int		max;

	normi.len = a->len;
	normi.stack = (int *)malloc(sizeof(int) * normi.len);
	k = 0;
	min = search_min(a) - 1;
	max = search_max(a);
	while (++min <= max)
	{
		i = -1;
		while (min <= a->stack[++i])
		{
			if (min == a->stack[i])
			{
				normi.stack[i] = k++;
				a->stack[i] = max + 1;
			}
		}
	}
	free(a->stack);
	return (normi);
}

void	algorithm(t_num *a, t_num *b)
{	
	int	max_bits;
	int	j;
	int	i;
	int	max;

	*a = normalized_stack(a);
	max = search_max(a);
	max_bits = 0;
	while ((max >> max_bits) != 0)
		++max_bits;
	i = -1;
	while (++i < max_bits)
	{
		j = a->len;
		while (--j >= 0)
		{
			if (((a->stack[a->len - 1] >> i) & 1) == 0)
				pb(a, b, 1);
			else
				ra(a, 1);
		}
		while (b->len)
			pa(a, b, 1);
	}
}
