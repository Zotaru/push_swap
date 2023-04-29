/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:52:19 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 01:01:02 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_ilist **list1, t_ilist **list2, t_list **move_lst, char *str)
{
	t_ilist	*temp;

	if (!list1 || !*list1)
		return ;
	temp = *list1;
	*list1 = (*list1)->next;
	temp->next = *list2;
	*list2 = temp;
	ft_lstadd_back_char(move_lst, ft_lstnew_char(str));
	if (*list1)
		allocate_actual_position(*list1);
	if (*list2)
		allocate_actual_position(*list2);
	return ;
}
