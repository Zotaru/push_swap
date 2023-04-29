/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:52:09 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 00:59:40 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	stat_swap(t_ilist **list)
{
	t_ilist	*temp;

	if (!*list || !list)
		return ;
	swap_actual_position(*list);
	temp = *list;
	*list = (*list)->next;
	temp->next = (*list)->next;
	(*list)->next = temp;
	return ;
}

void	double_swap(t_ilist **list_a, t_ilist **list_b, t_list **move_lst)
{
	stat_swap(list_a);
	stat_swap(list_b);
	ft_lstadd_back_char(move_lst, ft_lstnew_char("ss"));
	return ;
}
