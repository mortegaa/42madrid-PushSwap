/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 17:24:08 by mortega-          #+#    #+#             */
/*   Updated: 2021/02/25 18:26:32 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

float	ft_atof(const char *str)
{
	int		i;
	float	numero;
	float	decimal;
	char	negative;

	i = 0;
	negative = 0;
	numero = 0;
	decimal = 0;
	while (*str == ' ' || *str == '\t')
		str++;
	*str == '-' ? (str++ && negative++) : 0;
	while (*str >= '0' && *str <= '9')
		numero = numero * 10 + *str++ - 48;
	*str == '.' ? str++ : 0;
	while (str[i] >= '0' && str[i] <= '9')
		decimal = decimal * 10 + str[i++] - 48;
	while (i-- > 0)
		decimal = decimal / 10;
	if (numero == 0 && negative > 0)
		decimal = decimal * -1;
	else if (negative > 0)
		numero = numero * -1;
	return (numero + decimal);
}
