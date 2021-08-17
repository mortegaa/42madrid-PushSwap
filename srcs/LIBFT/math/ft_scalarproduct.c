/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scalarproduct.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 21:38:17 by mortega-          #+#    #+#             */
/*   Updated: 2021/07/31 00:17:10 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_vector	ft_scalarproduct(float const num, t_vector vec)
{
	t_vector result;

	result.x = vec.x * num;
	result.y = vec.y * num;
	result.z = vec.z * num;
	return (result);
}
