/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 07:38:40 by mortega-          #+#    #+#             */
/*   Updated: 2021/10/07 17:32:24 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	rra(t_num *a, char ch)
{
	int	i;
	int	c;

	i = -1;
	while (++i < a->l - 1)
	{
		c = a->stk[i];
		a->stk[i] = a->stk[i + 1];
		a->stk[i + 1] = c;
	}
	if (ch)
		write(1, "rra\n", 4);
	return (1);
}

int	rrb(t_num *b, char ch)
{
	int	i;
	int	c;

	i = -1;
	while (++i < b->l - 1)
	{
		c = b->stk[i];
		b->stk[i] = b->stk[i + 1];
		b->stk[i + 1] = c;
	}
	if (ch)
		write(1, "rrb\n", 4);
	return (1);
}

int	rr(t_num *a, t_num *b, char ch)
{
	int	i;
	int	c;

	i = 0;
	while (++i < a->l)
	{
		c = a->stk[a->l - i];
		a->stk[a->l - i] = a->stk[a->l - i - 1];
		a->stk[a->l - i - 1] = c;
	}
	i = 0;
	while (++i < b->l)
	{
		c = b->stk[b->l - i];
		b->stk[b->l - i] = b->stk[b->l - i - 1];
		b->stk[b->l - i - 1] = c;
	}
	if (ch)
		write(1, "rr\n", 3);
	return (1);
}

int	ra(t_num *a, char ch)
{
	int	i;
	int	c;

	i = 0;
	while (++i < a->l)
	{
		c = a->stk[a->l - i];
		a->stk[a->l - i] = a->stk[a->l - i - 1];
		a->stk[a->l - i - 1] = c;
	}
	if (ch)
		write(1, "ra\n", 3);
	return (1);
}

int	rb(t_num *b, char ch)
{
	int	i;
	int	c;

	i = 0;
	while (++i < b->l)
	{
		c = b->stk[b->l - i];
		b->stk[b->l - i] = b->stk[b->l - i - 1];
		b->stk[b->l - i - 1] = c;
	}
	if (ch)
		write(1, "rb\n", 3);
	return (1);
}
