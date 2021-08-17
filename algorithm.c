/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 09:03:07 by mortega-          #+#    #+#             */
/*   Updated: 2021/08/14 14:43:53 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	algorithm(t_num *a, t_num *b, int max)
{
	int	max_bits;
	int	i;
	int	j;
	int num;
	int	cont;

	cont = 0;
	max_bits = 0;
	while ((max >> max_bits) != 0)
		++max_bits;

	i = 0;
	while (i < max_bits)
	{
		j = a->len;
		while (j > 0)
		{
			num = a->stack[a->len - 1];
			if (num >= 0 && ((num >> i) & 1) == 0)
				cont += p(a, b);
			else
				cont += r(a);
			j--;
		}
		while (b->len)
			cont += p(b, a);
		i++;
	}
	i = 1;
	while (i < max_bits + 1)
	{
		j = a->len;
		while (j > 0)
		{
			num = a->stack[a->len - 1];
			if  (num < 0 && (((-num) & (1 << i)) == 0))
				cont += p(a, b);
			else if (num < 0)
				cont += r(a);
			j--;
		}
		while (b->len)
			cont += p(b, a);
		i++;
	}
	i = a->len;
	while (a->stack[--i] <  0)
		cont += p(a, b);
	while (b->len)
	{
		cont += rra(b);
		cont += p(b, a);
	}
	printf("**********|%d|***********\n", cont);
	return (cont);
}
