#include "includes/push_swap.h"

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
			a->stack[--k] = ft_atoi(args[j++]);
			l = len;
			while (--l > k)
				if (a->stack[k] == a->stack[l])
					exit_mess("Error\nRepeated number\n");
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

	num = 0;
	i = 1;
	while (args[i])
	{
		num += ft_split_count(args[i], ' ');
		if (args[i][0] == '\0')
			exit_mess("Error\nGhost Number\n");
		j = 0;
		while (args[i][j])
		{
			if (!(args[i][j] == ' ' || args[i][j] == '-' || args[i][j] == '+'
						|| (args[i][j] >= '0' && args[i][j] <= '9'))
					|| (args[i][j] == '-'
						&& (args[i][j - 1] >= '0' && args[i][j] <= '9')))
				exit_mess("Error\nAny of the arguments is not valid\n");
			j++;
		}
		i++;
	}
	return (num);
}

int	check_stack(t_num *a, t_num *b)
{
	int i;

	if (b->len)
		return (0);
	i = 0;
	while (++i < a->len)
		if (a->stack[i] > a->stack[i - 1])
			return (0);
	return (1);
}
