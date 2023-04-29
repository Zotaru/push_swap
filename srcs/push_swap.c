/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:58:04 by amonier           #+#    #+#             */
/*   Updated: 2023/04/28 23:22:08 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_ilist **list_a)
{
	t_ilist	*list_b;
	t_list	*lst_move_1;
	t_ilist	*list_dup_1;

	list_b = NULL;
	list_dup_1 = duplicate_lst(*list_a);
	lst_move_1 = NULL;
	if (accuracy_one(*list_a) == ft_lstsize(*list_a) - 1)
		return (free_lst_int(&list_dup_1));
	else if (ft_lstsize(list_dup_1) == 2)
		lst_move_1 = two_nb(&list_dup_1);
	else if (ft_lstsize(list_dup_1) == 3)
		lst_move_1 = three_nb(&list_dup_1);
	else if (ft_lstsize(list_dup_1) >= 4 && ft_lstsize(list_dup_1) <= 6)
		lst_move_1 = five_nb(&list_dup_1);
	else if (ft_lstsize(list_dup_1) > 6)
		lst_move_1 = sort3(&list_dup_1);
	print_lst_char(lst_move_1);
	free_lst_int(&list_dup_1);
	free_lst_char(&lst_move_1);
	return ;
}
