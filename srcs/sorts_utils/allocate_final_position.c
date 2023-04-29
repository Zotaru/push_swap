/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate_final_position.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:57:21 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 00:34:50 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min_next(t_ilist *list, int min_actual)
{
	int	nombre;

	nombre = ft_max_content(list);
	while (list)
	{
		if (list->content <= nombre && list->content > min_actual)
			nombre = list->content;
		list = list->next;
	}
	return (nombre);
}

void	allocate_final_position(t_ilist *list)
{
	int		nombre_min;
	int		i;
	t_ilist	*temp;

	i = 1;
	nombre_min = ft_min_content(list);
	temp = list;
	while (i <= ft_lstsize(list))
	{
		while (temp)
		{
			if (temp->content == nombre_min && temp->final_position == 0)
			{
				temp->final_position = i;
				break ;
			}
			temp = temp->next;
		}
		i++;
		temp = list;
		nombre_min = ft_min_next(list, nombre_min);
	}
}
