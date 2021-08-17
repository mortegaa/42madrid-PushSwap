/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 21:40:20 by mortega-          #+#    #+#             */
/*   Updated: 2020/01/25 14:54:40 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				i;
	char			*smapi;

	if (!s || !(smapi = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (0);
	i = -1;
	while (s[++i] != '\0')
		smapi[i] = f(i, s[i]);
	smapi[i] = '\0';
	return (smapi);
}
