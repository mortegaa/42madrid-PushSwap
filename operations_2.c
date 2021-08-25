/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 07:38:40 by mortega-          #+#    #+#             */
/*   Updated: 2021/08/24 22:46:00 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	rra(t_num *a)
{
	int	i;
	int	c;

	i = -1;
	while (++i < a->len - 1)
	{
		c = a->stack[i];
		a->stack[i] = a->stack[i + 1];
		a->stack[i + 1] = c;
	}
	printf("rra\n");
	return (1);
}

int	rrb(t_num *b)
{
	int	i;
	int	c;

	i = -1;
	while (++i < b->len - 1)
	{
		c = b->stack[i];
		b->stack[i] = b->stack[i + 1];
		b->stack[i + 1] = c;
	}
	printf("rrb\n");
	return (1);
}

int	rr(t_num *a, t_num *b)
{
	int	i;
	int	c;

	i = 0;
	while (++i < a->len)
	{
		c = a->stack[a->len - i];
		a->stack[a->len - i] = a->stack[a->len - i - 1];
		a->stack[a->len - i - 1] = c;
	}
	i = 0;
	while (++i < b->len)
	{
		c = b->stack[b->len - i];
		b->stack[b->len - i] = b->stack[b->len - i - 1];
		b->stack[b->len - i - 1] = c;
	}
	printf("rr\n");
	return (1);
}

int	ra(t_num *a)
{
	int	i;
	int	c;

	i = 0;
	while (++i < a->len)
	{
		c = a->stack[a->len - i];
		a->stack[a->len - i] = a->stack[a->len - i - 1];
		a->stack[a->len - i - 1] = c;
	}
	printf("ra\n");
	return (1);
}

int	rb(t_num *b)
{
	int	i;
	int	c;

	i = 0;
	while (++i < b->len)
	{
		c = b->stack[b->len - i];
		b->stack[b->len - i] = b->stack[b->len - i - 1];
		b->stack[b->len - i - 1] = c;
	}
	printf("rb\n");
	return (1);
}
