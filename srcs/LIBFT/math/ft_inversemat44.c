/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inversemat44.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 18:32:25 by mortega-          #+#    #+#             */
/*   Updated: 2021/07/31 00:21:13 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_inversemat44(t_mat44 inv, t_mat44 const mat)
{
	t_mat44	adj;
	t_mat44 tras;
	int		i;
	int		j;
	float	ddet;

	ddet = 1 / ft_detmat44(mat);
	i = -1;
	while (++i < 4 && (j = -1))
		while (++j < 4)
			adj[i][j] = ft_adjmat44(mat, i, j, 1);
	ft_trasmat44(tras, adj);
	i = -1;
	while (++i < 4 && (j = -1))
		while (++j < 4)
			inv[i][j] = tras[i][j] * ddet;
}

/*
**int main(void)
**{
**	t_mat44 mat = {{1, 2, 1, 2}, {6, 5, 4, 5}, {1, 2, 5, 4}, {8, 5, 9, 1}};
**	t_mat44 inv;
**	int i;
**	int j;
**
**	ft_inversemat44(inv, mat);
**
**	i = -1;
**	printf("Esta es la INVERSA: \n\t");
**	while (++i < 4 && (j = -1))
**	{
**		while (++j < 4)
**			printf("\t%f\t", inv[i][j]);
**		printf("\n\t");
**	}
**
**	return 0;
**}
*/
