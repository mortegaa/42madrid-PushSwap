/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 16:30:04 by mortega-          #+#    #+#             */
/*   Updated: 2021/10/07 19:08:37 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../../includes/push_swap.h"
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int					negative;
	unsigned long long	sum;

	negative = 0;
	sum = 0;
	while (*str == ' ' || *str == '\t')
		str++;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			negative++;
	if (*str < '0' || *str > '9')
		exit_mess("No number character\n");
	while (*str >= '0' && *str <= '9')
	{
		sum = sum * 10 + *str++ - 48;
		if ((sum > 2147483648 && negative != 0)
			|| (sum > 2147483647 && negative == 0))
			exit_mess("Non-INT Number\n");
	}
	if (negative != 0)
		return (-sum);
	else
		return (sum);
}
