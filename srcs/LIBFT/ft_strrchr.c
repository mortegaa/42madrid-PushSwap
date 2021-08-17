/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 16:39:48 by mortega-          #+#    #+#             */
/*   Updated: 2020/02/01 00:18:11 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t i;

	i = -1;
	while (++i <= ft_strlen(s))
		if (s[ft_strlen(s) - i] == (unsigned char)c)
			return ((char *)&s[ft_strlen(s) - i]);
	return (0);
}
