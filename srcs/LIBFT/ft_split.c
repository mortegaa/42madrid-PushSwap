/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 19:00:00 by mortega-          #+#    #+#             */
/*   Updated: 2021/02/26 14:08:59 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**spl;
	int		i;

	if ((i = 0) && !s)
		return (NULL);
	count = !(--s);
	while (*(++s) != '\0' && (++i))
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			count++;
	if (!(spl = (char **)malloc(sizeof(char *) * (count + 1))))
		return (NULL);
	i = !(s -= i + 1);
	while (*(++s))
		if (*s != c && (count = 1))
		{
			while (*(s + count) && *(s + count) != c)
				count++;
			spl[i++] = ft_substr(s, 0, count);
			s = s + count - 1;
		}
	return (!(spl[i] = NULL) ? spl : NULL);
}
