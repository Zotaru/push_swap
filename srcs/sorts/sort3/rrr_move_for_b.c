/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr_move_for_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 05:54:03 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 22:46:23 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*move_rrr_rrb(t_ilist *cheapest, t_ilist *inf, int size_a,
		int size_b)
{
	t_list	*lst_move;

	lst_move = NULL;
	while (inf->actual_position < (size_b + 1))
	{
		ft_lstadd_back_char(&lst_move, ft_lstnew_char("rrr"));
		inf->actual_position++;
		cheapest->actual_position++;
	}
	while (cheapest->actual_position < (size_a + 1))
	{
		ft_lstadd_back_char(&lst_move, ft_lstnew_char("rrb"));
		cheapest->actual_position++;
	}
	return (lst_move);
}

t_list	*rrr_move_for_b(t_ilist *cheapest, t_ilist *inf, int size_a, int size_b)
{
	t_list	*lst_move;

	lst_move = NULL;
	if ((size_a - cheapest->actual_position + 1) >= (size_b
			- inf->actual_position + 1))
		ft_lstadd_back_char(&lst_move, move_rrr_rrb(cheapest, inf, size_a,
				size_b));
	else
	{
		while (cheapest->actual_position < (size_a + 1))
		{
			ft_lstadd_back_char(&lst_move, ft_lstnew_char("rrr"));
			inf->actual_position++;
			cheapest->actual_position++;
		}
		while (inf->actual_position < (size_b + 1))
		{
			ft_lstadd_back_char(&lst_move, ft_lstnew_char("rra"));
			inf->actual_position++;
		}
	}
	return (lst_move);
}
