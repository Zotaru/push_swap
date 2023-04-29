/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_nb_for_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 05:17:10 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 05:29:37 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// classe du plus grand au plus petit
// il y a 6 cas possible i on a 3 chiffres
// 3 2 1 rien a faire
// 3 1 2 juste un sb puis un rb
// 2 3 1 juste un sb
// 2 1 3 juste un rrb
// 1 3 2 juste un rb
// 1 2 3 juste un sb puis un rrb

static void	min_first(t_ilist **list_b, t_list **move_lst)
{
	if (((*list_b)->next)->final_position == ft_max_final_position(*list_b))
		rotate(list_b, move_lst, "rb");
	else
	{
		swap(list_b, move_lst, "sb");
		reverse_rotate(list_b, move_lst, "rrb");
	}
	return ;
}

t_list	*three_nb_for_b(t_ilist **list_b)
{
	t_list	*move_lst;

	move_lst = NULL;
	if ((*list_b)->final_position == ft_min_final_position(*list_b))
		min_first(list_b, &move_lst);
	else if ((*list_b)->final_position == ft_max_final_position(*list_b))
	{
		if (((*list_b)->next)->final_position == ft_min_final_position(*list_b))
		{
			swap(list_b, &move_lst, "sb");
			rotate(list_b, &move_lst, "rb");
		}
		else
			return (NULL);
	}
	else
	{
		if (((*list_b)->next)->final_position == ft_min_final_position(*list_b))
			reverse_rotate(list_b, &move_lst, "rrb");
		else
			swap(list_b, &move_lst, "sb");
	}
	return (move_lst);
}
