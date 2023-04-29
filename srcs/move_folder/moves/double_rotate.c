/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 21:23:33 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 00:59:42 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	stat_rotate(t_ilist **list)
{
	t_ilist	*temp;

	temp = *list;
	*list = (*list)->next;
	temp->next = NULL;
	ft_lstadd_back(list, temp);
	rotate_actual_position(*list);
	return ;
}

void	double_rotate(t_ilist **list_1, t_ilist **list_2, t_list **move_lst)
{
	stat_rotate(list_1);
	stat_rotate(list_2);
	ft_lstadd_back_char(move_lst, ft_lstnew_char("rr"));
	return ;
}
