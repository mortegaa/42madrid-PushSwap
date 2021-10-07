/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 07:29:41 by mortega-          #+#    #+#             */
/*   Updated: 2021/10/07 17:32:00 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	sa(t_num *a, char ch)
{
	int	c;

	if (a->l > 2)
	{
		c = a->stk[a->l - 1];
		a->stk[a->l - 1] = a->stk[a->l - 2];
		a->stk[a->l - 2] = c;
	}
	if (ch)
		write(1, "sa\n", 3);
	return (1);
}

int	sb(t_num *b, char ch)
{
	int	c;

	if (b->l > 2)
	{
		c = b->stk[b->l - 1];
		b->stk[b->l - 1] = b->stk[b->l - 2];
		b->stk[b->l - 2] = c;
	}
	if (ch)
		write(1, "sb\n", 3);
	return (1);
}

int	ss(t_num *a, t_num *b, char ch)
{
	int	c;

	if (a->l > 2)
	{
		c = a->stk[a->l - 1];
		a->stk[a->l - 1] = a->stk[a->l - 2];
		a->stk[a->l - 2] = c;
	}
	if (b->l > 2)
	{
		c = b->stk[b->l - 1];
		b->stk[b->l - 1] = b->stk[b->l - 2];
		b->stk[b->l - 2] = c;
	}
	if (ch)
		write(1, "ss\n", 3);
	return (1);
}

int	pb(t_num *a, t_num *b, char ch)
{
	if (!a->l)
		return (0);
	b->stk[b->l++] = a->stk[--a->l];
	if (ch)
		write(1, "pb\n", 3);
	return (1);
}

int	pa(t_num *a, t_num *b, char ch)
{
	if (!b->l)
		return (0);
	a->stk[a->l++] = b->stk[--b->l];
	if (ch)
		write(1, "pa\n", 3);
	return (1);
}
