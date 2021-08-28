/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 07:29:41 by mortega-          #+#    #+#             */
/*   Updated: 2021/08/25 15:09:18 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include <stdio.h>

int	sa(t_num *a, char ch)
{
	int	c;

	if (a->len > 2)
	{
		c = a->stack[a->len - 1];
		a->stack[a->len - 1] = a->stack[a->len - 2];
		a->stack[a->len - 2] = c;
	}
	if (ch)
		write(1, "sa\n", 3);
	return (1);
}

int	sb(t_num *b, char ch)
{
	int	c;

	if (b->len > 2)
	{
		c = b->stack[b->len - 1];
		b->stack[b->len - 1] = b->stack[b->len - 2];
		b->stack[b->len - 2] = c;
	}
	if (ch)
		write(1, "sb\n", 3);
	return (1);
}

int	ss(t_num *a, t_num *b, char ch)
{
	int c;

	if (a->len > 2)
	{
		c = a->stack[a->len - 1];
		a->stack[a->len - 1] = a->stack[a->len - 2];
		a->stack[a->len - 2] = c;
	}
	if (b->len > 2)
	{
		c = b->stack[b->len - 1];
		b->stack[b->len - 1] = b->stack[b->len - 2];
		b->stack[b->len - 2] = c;
	}
	if (ch)
		write(1, "ss\n", 3);
	return (1);
}

int	pb(t_num *a, t_num *b, char ch)
{
	if (!a->len)
		return (0);
	b->stack[b->len++] = a->stack[--a->len];
	if (ch)
		write(1, "pb\n", 3);
	return (1);
}

int	pa(t_num *a, t_num *b, char ch)
{
	if (!b->len)
		return (0);
	a->stack[a->len++] = b->stack[--b->len];
	if (ch)
		write(1, "pa\n", 3);
	return (1);
}
