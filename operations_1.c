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

int	sa(t_num *a)
{
	int	c;

	if (a->len > 2)
	{
		c = a->stack[a->len - 1];
		a->stack[a->len - 1] = a->stack[a->len - 2];
		a->stack[a->len - 2] = c;
	}
	printf("sa\n");
	return (1);
}

int	sb(t_num *b)
{
	int	c;

	if (b->len > 2)
	{
		c = b->stack[b->len - 1];
		b->stack[b->len - 1] = b->stack[b->len - 2];
		b->stack[b->len - 2] = c;
	}
	printf("sb\n");
	return (1);
}

int	ss(t_num *a, t_num *b)
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
	printf("ss\n");
	return (1);
}

int	pb(t_num *a, t_num *b)
{
	b->stack[b->len++] = a->stack[--a->len];
	printf("pb\n");
	return (1);
}

int	pa(t_num *a, t_num *b)
{
	a->stack[a->len++] = b->stack[--b->len];
	printf("pa\n");
	return (1);
}
