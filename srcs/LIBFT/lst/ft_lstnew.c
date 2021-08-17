/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 14:08:03 by mortega-          #+#    #+#             */
/*   Updated: 2021/07/31 00:28:09 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newel;

	if (!(newel = (t_list *)malloc(sizeof(*newel))))
		return (0);
	newel->content = content;
	newel->next = 0;
	return (newel);
}
