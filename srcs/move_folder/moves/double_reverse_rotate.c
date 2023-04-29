/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_reverse_rotate.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:51:53 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 00:59:44 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	stat_reverse_rotate(t_ilist **list)
{
	t_ilist	*temp;
	t_ilist	*temp2;

	temp = ft_lstlast(*list);
	temp2 = *list;
	while (temp2->next != temp)
		temp2 = temp2->next;
	temp2->next = NULL;
	temp->next = *list;
	*list = temp;
	reverse_rotate_actual_position(*list);
	return ;
}

void	double_reverse_rotate(t_ilist **list_1, t_ilist **list_2,
		t_list **move_lst)
{
	stat_reverse_rotate(list_1);
	stat_reverse_rotate(list_2);
	ft_lstadd_back_char(move_lst, ft_lstnew_char("rrr"));
	return ;
}
