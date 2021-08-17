/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 18:05:14 by mortega-          #+#    #+#             */
/*   Updated: 2020/02/01 17:18:34 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	count(long n)
{
	unsigned long	nb;
	long			i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	nb = n;
	while (nb > 9)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	long	nb;
	int		i;
	int		minus;
	char	*snum;

	nb = (long)n;
	minus = 0;
	i = 1 + count(nb);
	if (nb < 0)
	{
		nb = nb * -1;
		minus = 1;
	}
	if (!(snum = (char *)malloc(sizeof(char) * i + 1)))
		return (0);
	snum[i] = '\0';
	while (--i >= 0)
	{
		snum[i] = nb % 10 + 48;
		nb = nb / 10;
	}
	if (minus == 1)
		snum[0] = 45;
	return (snum);
}
