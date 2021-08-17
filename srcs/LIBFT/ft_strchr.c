/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 16:21:58 by mortega-          #+#    #+#             */
/*   Updated: 2020/02/01 00:17:41 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = -1;
	while (s[++i] != '\0')
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	return (0);
}
