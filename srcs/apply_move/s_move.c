/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_move.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:47:03 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 00:40:53 by amonier          ###   ########.fr       */
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

static void	stat_double_swap(t_ilist **list_a, t_ilist **list_b)
{
	stat_swap(list_a);
	stat_swap(list_b);
	return ;
}

void	s_move(char *str, t_ilist **list_a, t_ilist **list_b)
{
	if (str[1] == 'a')
		stat_swap(list_a);
	else if (str[1] == 'b')
		stat_swap(list_b);
	else
		stat_double_swap(list_a, list_b);
}
