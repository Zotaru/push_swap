/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 02:41:03 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 04:31:39 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_ilist	*return_first(t_ilist *list_a)
{
	while (list_a)
	{
		if (list_a->final_position == 1)
			return (list_a);
		list_a = list_a->next;
	}
	return (NULL);
}

void	rotate_a(t_ilist **list_a, t_list **lst_move)
{
	t_ilist	*first;
	int		size;

	size = ft_lstsize(*list_a);
	first = return_first(*list_a);
	if (first->actual_position <= size / 2)
	{
		while ((*list_a)->final_position != 1)
			rotate(list_a, lst_move, "ra");
	}
	else
	{
		while ((*list_a)->final_position != 1)
			reverse_rotate(list_a, lst_move, "rra");
	}
}
