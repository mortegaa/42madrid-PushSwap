/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 07:29:41 by mortega-          #+#    #+#             */
/*   Updated: 2021/08/14 12:51:32 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include <stdio.h>

int	s(t_num *a)
{
	int	c;

	if (a->len > 2)
	{
		c = a->stack[a->len - 1];
		a->stack[a->len - 1] = a->stack[a->len - 2];
		a->stack[a->len - 2] = c;
	}
	return (1);
}

int	ss(t_num *a, t_num *b)
{
	s(a);
	s(b);
	return (1);
}

int	p(t_num *a, t_num *b)
{
	b->stack[b->len++] = a->stack[--a->len];
	return (1);
}
