/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate_actual_position.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:57:03 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 02:26:05 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	allocate_actual_position(t_ilist *list)
{
	int	i;

	i = 1;
	while (list)
	{
		list->actual_position = i;
		i++;
		list = list->next;
	}
	return ;
}
