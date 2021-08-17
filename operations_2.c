/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 07:38:40 by mortega-          #+#    #+#             */
/*   Updated: 2021/08/14 12:51:55 by mortega-         ###   ########.fr       */
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
	return (1);
}

int	rr(t_num *a, t_num *b)
{
	r(a);
	r(b);
	return (1);
}

int	r(t_num *a)
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
	return (1);
}
