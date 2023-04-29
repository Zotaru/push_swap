/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_move.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 00:00:05 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 00:39:26 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	stat_push(t_ilist **list1, t_ilist **list2)
{
	t_ilist	*temp;

	if (!list1 || !*list1)
		return ;
	temp = *list1;
	*list1 = (*list1)->next;
	temp->next = *list2;
	*list2 = temp;
	return ;
}

void	p_move(char *str, t_ilist **list_a, t_ilist **list_b)
{
	if (str[1] == 'a')
		stat_push(list_b, list_a);
	else if (str[1] == 'b')
		stat_push(list_a, list_b);
}
