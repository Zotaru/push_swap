/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   closest_inf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 00:44:15 by amonier           #+#    #+#             */
/*   Updated: 2023/04/28 00:44:18 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// opti b

t_ilist	*closest_inf(t_ilist *best, t_ilist *list_b)
{
	t_ilist	*inf;

	inf = ft_min_pointer(list_b);
	while (list_b)
	{
		if (list_b->final_position < best->final_position
			&& list_b->final_position > inf->final_position)
			inf = list_b;
		list_b = list_b->next;
	}
	return (inf);
}
