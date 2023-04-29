/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:52:29 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 01:00:15 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_ilist **list, t_list **move_lst, char *str)
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
	ft_lstadd_back_char(move_lst, ft_lstnew_char(str));
	return ;
}
