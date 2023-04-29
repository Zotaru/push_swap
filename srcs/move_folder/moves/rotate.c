/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:52:43 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 01:00:37 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_ilist **list, t_list **move_lst, char *str)
{
	t_ilist	*temp;

	temp = *list;
	*list = (*list)->next;
	temp->next = NULL;
	ft_lstadd_back(list, temp);
	rotate_actual_position(*list);
	ft_lstadd_back_char(move_lst, ft_lstnew_char(str));
	return ;
}
