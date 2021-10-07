/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 00:01:28 by mortega-          #+#    #+#             */
/*   Updated: 2021/10/07 19:41:56 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_num	a;
	t_num	b;

	if (argc < 1)
		return (-1);
	else if (argc < 2)
		exit_mess("Insufficient arguments.\nPlease introduce any number\n");
	a.l = check_input(argv);
	a.stk = (int *)malloc(sizeof(int) * a.l);
	b.stk = (int *)malloc(sizeof(int) * a.l);
	b.l = 0;
	fill_stack(&a, argv, a.l);
	if (check_stack(&a, &b))
		return (1);
	if (a.l < 4)
		short_alg_3(&a, search_max(&a));
	else if (a.l < 6)
		short_alg_5(&a, &b);
	else
		algorithm(&a, &b);
	return (1);
}
