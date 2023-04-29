/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_nb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 04:38:52 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 05:11:55 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*two_nb(t_ilist **list_a)
{
	t_list	*move_lst;

	move_lst = NULL;
	if ((*list_a)->final_position == ft_min_final_position(*list_a))
		return (NULL);
	else
		rotate(list_a, &move_lst, "ra");
	return (move_lst);
}

t_list	*two_nb_for_b(t_ilist **list_b)
{
	t_list	*move_lst;

	move_lst = NULL;
	if ((*list_b)->final_position == ft_min_final_position(*list_b))
		rotate(list_b, &move_lst, "rb");
	return (move_lst);
}
