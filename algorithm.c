/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 09:03:07 by mortega-          #+#    #+#             */
/*   Updated: 2021/08/25 16:45:50 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	checker_stack(t_num *a, t_num *b)
{
	int i;

	if (b->len)
		return (0);
	i = 0;
	while (++i < a->len)
		if (a->stack[i] > a->stack[i - 1])
			return (0);
	//print_stack(*a, *b);
	exit(EXIT_SUCCESS);
	return (1);
}

int	short_alg_3(t_num *a, int max)
{
	int cont;

	cont = 0;
	if (a->len == 2)
		cont += sa(a);
	if (a->len == 3)
	{
		if (a->stack[0] == max && a->stack[1] > a->stack[2])
		{
			cont += ra(a);
			cont += sa(a);
		}
		else if (a->stack[0] == max && a->stack[1] < a->stack[2])
			cont += ra(a);
		else if (a->stack[1] == max && a->stack[0] > a->stack[2])
			cont += rra(a);
		else if (a->stack[1] == max && a->stack[0] < a->stack[2])
		{
			cont += rra(a);
			cont += sa(a);
		}
		else if (a->stack[2] == max)
			cont += sa(a);
	}
	return (cont);
}

int	short_alg_5(t_num *a, t_num *b, int max)
{
	int	cont;

	cont = 0;
	while (a->len - 3 + cont > 0)
		cont += pa(a, b);
	cont += short_alg_3(a, max);
	cont += find_and_catch(a, b, max);
	while (!checker_stack(a, b) && b->len)
	{
		if (a->stack[a->len - 1] < b->stack[b->len - 1] && a->stack[a->len - 2] > b->stack[b->len -1])
		{
			cont += ra(a);
			cont += pb(a, b);
		}
		else if (a->stack[a->len - 1] > b->stack[b->len - 1] && a->stack[0] < b->stack[b->len - 1])
			cont += pa(a, b);
	}
	cont += find_and_catch(a, b, max);
	return (cont);
}

/*
int	algorithm()
{
	int cont;
	int idex;
	int i;

	cont = 0;
	index = 1;
	i = 0;
	while (i < a->len)

}
*/

int	algorithm(t_num *a, t_num *b)
{
	int num;
	int max;
	int	aux;
	int cont;

	num = search_min(a);
	max = search_max(a);
	//printf("num = %d	max = %d\n", num, max);
	cont = 0;
	while (num <= max)
	{
		aux = 0;
		aux = find_and_catch(a, b, num);
		cont += aux;
		//printf("|%d|\n", aux);
		if (aux)
			cont += pb(a, b);
		//print_stack(*a, *b);
		//sleep(3);
		num++;
	}
	while (b->len)
		cont += pa(a, b);
	return (cont);
}

/*
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

	if (checker_stack(a))
		return (0);
	i = 0;
	while (i < max_bits)
	{
		j = a->len;
		while (j > 0)
		{
			num = a->stack[a->len - 1];
			if (num >= 0 && ((num >> i) & 1) == 0)
				cont += pb(a, b);
			else
				cont += ra(a);
			j--;
		}
		while (b->len)
			cont += pa(b, a);
		i++;
		if (checker_stack(a))
			return (cont);
	}
	i = 1;
	while (i < max_bits + 1)
	{
		j = a->len;
		while (j > 0)
		{
			num = a->stack[a->len - 1];
			if  (num < 0 && (((-num) & (1 << i)) == 0))
				cont += pb(a, b);
			else if (num < 0)
				cont += ra(a);
			j--;
		}
		while (b->len)
			cont += pa(b, a);
		i++;
		if (checker_stack(a))
			return (cont);
	}
	i = a->len;
	while (a->stack[--i] <  0)
		cont += pa(a, b);
	while (b->len)
	{
		cont += rra(b);
		cont += pa(b, a);
	}
	//printf("**********|%d|***********\n", cont);
	return (cont);
}*/
