/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_nb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 05:32:27 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 05:35:53 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*five_nb(t_ilist **list_a)
{
	t_ilist	*list_b;
	t_list	*move_lst;
	int		size;

	list_b = NULL;
	move_lst = NULL;
	size = ft_lstsize(*list_a);
	if (size == 6)
		size_of_6(list_a, &list_b, &move_lst);
	else if (size == 5)
		size_of_5(list_a, &list_b, &move_lst);
	else if (size == 4)
		size_of_4(list_a, &list_b, &move_lst);
	return (move_lst);
}
