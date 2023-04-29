/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rr_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 00:00:14 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 04:47:04 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	stat_rotate(t_ilist **list)
{
	t_ilist	*temp;

	if (!list || !*list || !((*list)->next))
		return ;
	temp = *list;
	*list = (*list)->next;
	temp->next = NULL;
	ft_lstadd_back(list, temp);
	return ;
}

static void	stat_double_rotate(t_ilist **list_1, t_ilist **list_2)
{
	stat_rotate(list_1);
	stat_rotate(list_2);
	return ;
}

static void	stat_reverse_rotate(t_ilist **list)
{
	t_ilist	*temp;
	t_ilist	*temp2;

	if (!list || !*list || !(*list)->next)
		return ;
	temp = ft_lstlast(*list);
	temp2 = *list;
	while (temp2->next != temp)
		temp2 = temp2->next;
	temp2->next = NULL;
	temp->next = *list;
	*list = temp;
	return ;
}

static void	stat_double_reverse_rotate(t_ilist **list_1, t_ilist **list_2)
{
	stat_reverse_rotate(list_1);
	stat_reverse_rotate(list_2);
	return ;
}

void	r_rr_move(char *str, t_ilist **list_a, t_ilist **list_b)
{
	int	len;

	len = ft_strlen(str);
	if (len == 3)
	{
		if (str[1] == 'a')
			stat_rotate(list_a);
		else if (str[1] == 'b')
			stat_rotate(list_b);
		else if (str[1] == 'r')
			stat_double_rotate(list_a, list_b);
	}
	else if (len == 4)
	{
		if (str[2] == 'a')
			stat_reverse_rotate(list_a);
		else if (str[2] == 'b')
			stat_reverse_rotate(list_b);
		else if (str[2] == 'r')
			stat_double_reverse_rotate(list_a, list_b);
	}
}
