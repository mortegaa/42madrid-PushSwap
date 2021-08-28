/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 00:36:50 by mortega-          #+#    #+#             */
/*   Updated: 2021/08/25 16:43:45 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	exit_mess(char *str)
{
	write(1, str, ft_strlen(str));
	exit(EXIT_FAILURE);
}

int	search_max(t_num *a)
{
	int	i;
	int	max;

	max = -2147483648;
	i = -1;
	while (++i < a->len)
		if (a->stack[i] > max)
			max = a->stack[i];
	return (max);
}

int	search_min(t_num *a)
{
	int	i;
	int	min;

	min = 2147483647;
	i = -1;
	while (++i < a->len)
		if (a->stack[i] < min)
			min = a->stack[i];
	return (min);
}

int		rrr(t_num *a, t_num *b, char ch)
{
	int i;
	int c;

	i = -1;
	while (++i < a->len - 1)
	{
		c = a->stack[i];
		a->stack[i] = a->stack[i + 1];
		a->stack[i + 1] = c;
	}
	i = -1;
	while (++i < b->len - 1)
	{
		c = b->stack[i];
		b->stack[i] = b->stack[i + 1];
		b->stack[i + 1] = c;
	}
	if (ch)
		write(1, "rrr\n", 4);
	return (1);
}
