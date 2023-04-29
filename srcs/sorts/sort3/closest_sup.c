/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   closest_sup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 00:44:09 by amonier           #+#    #+#             */
/*   Updated: 2023/04/28 00:44:35 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_ilist	*closest_sup(t_ilist *best, t_ilist *list_b)
{
	t_ilist	*sup;

	sup = ft_max_pointer(list_b);
	while (list_b)
	{
		if (list_b->final_position > best->final_position
			&& list_b->final_position < sup->final_position)
			sup = list_b;
		list_b = list_b->next;
	}
	return (sup);
}
