/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 14:56:07 by mortega-          #+#    #+#             */
/*   Updated: 2020/02/01 00:06:03 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*aux;

	if (!(aux = malloc(count * size)))
		return (0);
	i = -1;
	while (++i < size * count)
		((unsigned char *)aux)[i] = 0;
	return (aux);
}
