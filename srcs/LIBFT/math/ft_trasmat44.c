/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trasmat44.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 18:40:03 by mortega-          #+#    #+#             */
/*   Updated: 2021/07/31 00:24:08 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_trasmat44(t_mat44 tras, t_mat44 const mat)
{
	char i;
	char j;

	i = -1;
	while (++i < 4 && (j = -1))
		while (++j < 4)
			tras[(int)i][(int)j] = mat[(int)j][(int)i];
}

/*
**int main(void)
**{
**	char i;
**	char j;
**
**	t_mat44 mat = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10,11,12},{13,14,15,16}};
**	t_mat44 tras;
**
**	printf("Esta es la matriz: \n\t");
**	i = -1;
**	while (++i < 4 && (j = -1))
**	{
**		while (++j < 4)
**			printf(" %.0f ", mat[i][j]);
**		printf("\n\t");
**	}
**	ft_trasmat44(tras, mat);
**	printf("Esta es la traspuesta: \n\t");
**	i = -1;
**	while (++i < 4 && (j = -1))
**	{
**		while (++j < 4)
**			printf(" %.0f ", tras[i][j]);
**		printf("\n\t");
**	}
**	return (0);
**}
*/
