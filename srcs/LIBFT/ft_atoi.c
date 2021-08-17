/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 16:30:04 by mortega-          #+#    #+#             */
/*   Updated: 2021/07/31 06:48:27 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int						negative;
	unsigned long long		sum;

	negative = 0;
	sum = 0;
	while (*str == '\n' || *str == ' ' || *str == '\t' || *str == '\b'
			|| *str == '\f' || *str == '\v' || *str == '\r')
		str++;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			negative++;
	while (*str >= '0' && *str <= '9')
	{
		sum = sum * 10 + *str++ - 48;
		if (sum > 9223372036854775807 && negative != 0)
			return (0);
		else if (sum > 9223372036854775807 && negative == 0)
			return (-1);
	}
	//if (*str != '\0' || *str != '\n')
	//	return (-1);
	if (negative != 0)
		return (-sum);
	else
		return (sum);
}
