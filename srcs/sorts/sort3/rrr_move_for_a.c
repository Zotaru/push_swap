/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr_move_for_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 05:58:39 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 22:33:43 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
1 -> rr (ou ra ou rb pas vraiment finalement) ou rr + ra ou rr
	+ rb peut etre opi a faire ? 
2 -> rrr ou rra ou rrb ou rrr + rra ou rrr + rrb
3 -> ra + rrb
4 -> rra + rb
*/

static t_list	*move_rrr_rra(t_ilist *cheapest, t_ilist *inf, int size_a,
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
		ft_lstadd_back_char(&lst_move, ft_lstnew_char("rra"));
		cheapest->actual_position++;
	}
	return (lst_move);
}

t_list	*rrr_move_for_a(t_ilist *cheapest, t_ilist *inf, int size_a, int size_b)
{
	t_list	*lst_move;

	lst_move = NULL;
	if ((size_a - cheapest->actual_position + 1) >= (size_b
			- inf->actual_position + 1))
		ft_lstadd_back_char(&lst_move, move_rrr_rra(cheapest, inf, size_a,
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
			ft_lstadd_back_char(&lst_move, ft_lstnew_char("rrb"));
			inf->actual_position++;
		}
	}
	return (lst_move);
}
