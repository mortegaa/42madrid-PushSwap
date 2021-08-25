/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 00:01:28 by mortega-          #+#    #+#             */
/*   Updated: 2021/08/25 16:43:45 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include <stdio.h>

void	print_stack(t_num a, t_num b)
{
	int	i;
	int	len;

	len = a.len;
	if (b.len > a.len)
		len = b.len;
	i = 0;
	while (++i <= len)
	{
		if (i <= a.len)
			ft_putnbr_fd(a.stack[a.len - i], 1);
		write(1, "\t", 1);
		if (i <= b.len)
			ft_putnbr_fd(b.stack[b.len - i], 1);
		write(1, "\n", 1);
	}
	message("--\t--\na\tb\n\n");
}

int	fill_stack(t_num *a, char **argv)
{
	int		i;
	int		j;
	char	**args;
	int		len;
	int		k;
	int		max;
	int		l;

	k = 0;
	max = 0;
	i = 1;
	while (argv[i])
	{
		len = ft_split_count(argv[i], ' ');
		args = (char **)malloc((sizeof(char *) * len));
		args = ft_split(argv[i], ' ');
		j = 0;
		while (j < len)
		{
			a->stack[k++] = ft_atoi(args[j++]);
			if (a->stack[k - 1] > max)
				max = a->stack[k - 1];
			else if (a->stack[k - 1] < 0)
				if (-a->stack[k - 1] > max)
				max = a->stack[k - 1];
			l = -1;
			while (++l < k - 1)
				if (a->stack[k - 1] == a->stack[l])
				{
					message("Error\n");
					exit(EXIT_FAILURE);
				}

		}
		ft_split_free(args);
		i++;
	}
	if (max < 0)
		return (-max);
	return (max);
}

char	checker_input(char **args, int *num)
{
	int	i;
	int	j;

	*num = 0;
	i = 1;
	while (args[i])
	{
		*num += ft_split_count(args[i], ' ');
		j = 0;
		while (args[i][j])
		{
			if (!(args[i][j] == ' ' || args[i][j] == '-' || args[i][j] == '+'
						|| (args[i][j] >= '0' && args[i][j] <= '9'))
					|| (args[i][j] == '-'
						&& (args[i][j - 1] >= '0' && args[i][j] <= '9')))
			{
				message("Any of the arguments is not valid\n");
				return (-1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_num	a;
	t_num	b;
	int		max;
	int		len;

	if (argc < 1)
		return (-1);
	else if (argc < 2)
	{
		message("Insufficient arguments.\nPlease introduce any number\n");
		return (-1);
	}
	if (checker_input(argv, &len))
		return (-1);
	a.stack = (int *)malloc(sizeof(int) * len);
	b.stack = (int *)malloc(sizeof(int) * len);
	a.len = len;
	b.len = 0;
	max = fill_stack(&a, argv);
	//print_stack(a, b);
	checker_stack(&a, &b);
	/*if (a.len < 4)
		short_alg_3(&a, max);
	else if (a.len < 6)
		short_alg_5(&a, &b, max);
	else*/
		algorithm(&a, &b);
	//print_stack(a, b);
	return (0);
}
