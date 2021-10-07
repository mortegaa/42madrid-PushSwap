/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 09:03:07 by mortega-          #+#    #+#             */
/*   Updated: 2021/10/07 18:29:43 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	short_alg_3(t_num *a, int max)
{
	if (a->l == 2)
		sa(a, 1);
	if (a->l == 3)
	{
		if (a->stk[2] == max && a->stk[1] > a->stk[0])
		{
			ra(a, 1);
			sa(a, 1);
		}
		else if (a->stk[2] == max && a->stk[1] < a->stk[0])
			ra(a, 1);
		else if (a->stk[1] == max && a->stk[2] > a->stk[0])
			rra(a, 1);
		else if (a->stk[1] == max && a->stk[2] < a->stk[0])
		{
			rra(a, 1);
			sa(a, 1);
		}
		else if (a->stk[0] == max && a->stk[1] < a->stk[2])
			sa(a, 1);
	}
}

void	short_alg_5(t_num *a, t_num *b)
{
	while (a->l > 3)
		find_and_catch(a, b, search_min(a));
	short_alg_3(a, search_max(a));
	while (b->l)
		pa(a, b, 1);
}

void	find_and_catch(t_num *a, t_num *b, int max)
{
	int	i;

	i = -1;
	while (++i < a->l)
		if (a->stk[i] == max)
			break ;
	if (i == a->l)
		return ;
	if (++i <= a->l / 2)
		while (--i >= 0)
			rra(a, 1);
	else if (i > a->l / 2 && i < a->l)
		while ((a->l - ++i) >= 0)
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

	normi.l = a->l;
	normi.stk = (int *)malloc(sizeof(int) * normi.l);
	k = 0;
	min = search_min(a) - 1;
	max = search_max(a);
	while (++min <= max)
	{
		i = -1;
		while (++i < a->l)
		{
			if (min == a->stk[i])
			{
				normi.stk[i] = k++;
				a->stk[i] = max + 1;
			}
		}
	}
	free(a->stk);
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
		j = a->l;
		while (--j >= 0)
		{
			if (((a->stk[a->l - 1] >> i) & 1) == 0)
				pb(a, b, 1);
			else
				ra(a, 1);
		}
		while (b->l)
			pa(a, b, 1);
	}
}
