/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:52:50 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 01:00:26 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_ilist **list, t_list **move_lst, char *str)
{
	t_ilist	*temp;

	if (!*list || !list)
		return ;
	swap_actual_position(*list);
	temp = *list;
	*list = (*list)->next;
	temp->next = (*list)->next;
	(*list)->next = temp;
	ft_lstadd_back_char(move_lst, ft_lstnew_char(str));
	return ;
}
