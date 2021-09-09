#include "includes/push_swap.h"

void	which_operation(t_num *a, t_num *b, char *line)
{
	if (!ft_strcmp(line, "sa"))
		sa(a, 0);
	else if (!ft_strcmp(line, "sb"))
		sb(b, 0);
	else if (!ft_strcmp(line, "ss"))
		ss(a, b, 0);
	else if (!ft_strcmp(line, "pa"))
		pa(a, b, 0);
	else if (!ft_strcmp(line, "pb"))
		pb(a, b, 0);
	else if (!ft_strcmp(line, "ra"))
		ra(a, 0);
	else if (!ft_strcmp(line, "rb"))
		rb(b, 0);
	else if (!ft_strcmp(line, "rr"))
		rr(a, b, 0);
	else if (!ft_strcmp(line, "rra"))
		rra(a, 0);
	else if (!ft_strcmp(line, "rrb"))
		rrb(b, 0);
	else if (!ft_strcmp(line, "rrr"))
		rrr(a, b, 0);
	else
		exit_mess("Error\nNot valid operation\n");
}

void	order_stack(t_num *a, t_num *b)
{
	char	*line;

	while (get_next_line(0, &line) > 0)
	{
		which_operation(a, b, line);
		free(line);
	}
	free(line);
}

int	main(int argc, char **argv)
{
	t_num	a;
	t_num	b;

	if (argc < 1)
		return (-1);
	else if (argc < 2)
		exit_mess("Error\nInsufficient arguments\n");
	a.len = check_input(argv);
	a.stack = (int *)malloc(sizeof(int) * a.len);
	b.stack = (int *)malloc(sizeof(int) * a.len);
	b.len = 0;
	fill_stack(&a, argv, a.len);
	order_stack(&a, &b);
	if (check_stack(&a, &b))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	return (0);
}
