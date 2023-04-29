/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_move_for_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 05:58:42 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 22:33:22 by amonier          ###   ########.fr       */
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

static void	move_rr_ra(t_list **lst_move, t_ilist *cheapest, t_ilist *inf)
{
	while (inf->actual_position > 1)
	{
		ft_lstadd_back_char(lst_move, ft_lstnew_char("rr"));
		inf->actual_position--;
		cheapest->actual_position--;
	}
	while (cheapest->actual_position > 1)
	{
		ft_lstadd_back_char(lst_move, ft_lstnew_char("ra"));
		cheapest->actual_position--;
	}
	return ;
}

t_list	*rr_move_for_a(t_ilist *cheapest, t_ilist *inf)
{
	t_list	*lst_move;

	lst_move = NULL;
	if (cheapest->actual_position >= inf->actual_position)
		move_rr_ra(&lst_move, cheapest, inf);
	else
	{
		while (cheapest->actual_position > 1)
		{
			ft_lstadd_back_char(&lst_move, ft_lstnew_char("rr"));
			inf->actual_position--;
			cheapest->actual_position--;
		}
		while (inf->actual_position > 1)
		{
			ft_lstadd_back_char(&lst_move, ft_lstnew_char("rb"));
			inf->actual_position--;
		}
	}
	return (lst_move);
}
