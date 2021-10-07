/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 00:36:50 by mortega-          #+#    #+#             */
/*   Updated: 2021/10/07 19:42:26 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

//	write(2, str, ft_strlen(str));

void	exit_mess(char *str)
{
	write(2, "Error\n", 6);
	(void)str;
	exit(EXIT_FAILURE);
}

int	search_max(t_num *a)
{
	int	i;
	int	max;

	max = -2147483648;
	i = -1;
	while (++i < a->l)
		if (a->stk[i] > max)
			max = a->stk[i];
	return (max);
}

int	search_min(t_num *a)
{
	int	i;
	int	min;

	min = 2147483647;
	i = -1;
	while (++i < a->l)
		if (a->stk[i] < min)
			min = a->stk[i];
	return (min);
}

int	rrr(t_num *a, t_num *b, char ch)
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
	i = -1;
	while (++i < b->l - 1)
	{
		c = b->stk[i];
		b->stk[i] = b->stk[i + 1];
		b->stk[i + 1] = c;
	}
	if (ch)
		write(1, "rrr\n", 4);
	return (1);
}
