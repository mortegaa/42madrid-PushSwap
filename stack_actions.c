/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_actions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:58:16 by mortega-          #+#    #+#             */
/*   Updated: 2021/10/07 19:36:49 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	print_stack(t_num a, t_num b)
{
	int	i;
	int	len;

	len = a.l;
	if (b.l > a.l)
		len = b.l;
	i = 0;
	while (++i <= len)
	{
		if (i <= a.l)
			ft_putnbr_fd(a.stk[a.l - i], 1);
		write(1, "\t", 1);
		if (i <= b.l)
			ft_putnbr_fd(b.stk[b.l - i], 1);
		write(1, "\n", 1);
	}
	write(1, "--\t--\na\tb\n\n", 11);
}

int	fill_stack(t_num *a, char **argv, int len)
{
	int		j;
	char	**args;
	int		slen;
	int		k;
	int		l;

	k = len;
	while (*(++argv))
	{
		slen = ft_split_count(*argv, ' ');
		args = ft_split(*argv, ' ');
		j = 0;
		while (j < slen)
		{
			a->stk[--k] = ft_atoi(args[j++]);
			l = len;
			while (--l > k)
				if (a->stk[k] == a->stk[l])
					exit_mess("Repeated number\n");
		}
		ft_split_free(args);
	}
	return (0);
}

int	check_input(char **args)
{
	int	i;
	int	j;
	int	num;
	int	n;

	num = 0;
	i = 0;
	while (args[++i])
	{
		num += ft_split_count(args[i], ' ');
		j = -1;
		while (args[i][++j])
		{
			if (!(args[i][j] == ' ' || args[i][j] == '-' || args[i][j] == '+'
						|| (args[i][j] >= '0' && args[i][j] <= '9'))
					|| ((args[i][j] == '-' || args[i][j] == '+')
						&& (args[i][j - 1] >= '0' && args[i][j] <= '9')))
				exit_mess("Some of the arguments is not valid\n");
			if (args[i][j] >= '0' && args[i][j] <= '9')
				n = 5;
		}
		if (n != 5)
			exit_mess("No Digit\n");
	}
	return (num);
}

int	check_stack(t_num *a, t_num *b)
{
	int	i;

	if (b->l)
		return (0);
	i = 0;
	while (++i < a->l)
		if (a->stk[i] > a->stk[i - 1])
			return (0);
	return (1);
}
