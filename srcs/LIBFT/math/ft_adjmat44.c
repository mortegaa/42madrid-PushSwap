/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adjmat44.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 18:37:58 by mortega-          #+#    #+#             */
/*   Updated: 2021/07/31 00:14:27 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <math.h>

float	ft_adjmat44(t_mat44 const mat, int i, int j, float num)
{
	t_mat33	det;
	int		i1;
	int		j1;
	int		i2;
	int		j2;

	i1 = -1;
	i2 = -1;
	while (++i1 < 3 && ++i2 < 4 && (j1 = -1))
	{
		j2 = -1;
		if (i1 == i && ++i2 < 4)
			while (++j1 < 3 && ++j2 < 4)
				det[i1][j1] = j1 == j && ++j2 < 4 ? mat[i2][j2] : mat[i2][j2];
		else
			while (++j1 < 3 && ++j2 < 4)
				det[i1][j1] = j1 == j && ++j2 < 4 ? mat[i2][j2] : mat[i2][j2];
	}
	return (pow(-1, i + j) * num * ft_detmat33(det));
}
