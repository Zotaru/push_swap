/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_move_for_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 02:41:15 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 05:58:05 by amonier          ###   ########.fr       */
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

static t_list	*rb_rra_move(t_ilist *cheapest, t_ilist *inf, int size_b)
{
	t_list	*lst_move;

	lst_move = NULL;
	while (cheapest->actual_position > 1)
	{
		ft_lstadd_back_char(&lst_move, ft_lstnew_char("rb"));
		cheapest->actual_position--;
	}
	while (inf->actual_position < (size_b + 1))
	{
		ft_lstadd_back_char(&lst_move, ft_lstnew_char("rra"));
		inf->actual_position++;
	}
	return (lst_move);
}

static t_list	*rrb_ra_move(t_ilist *cheapest, t_ilist *inf, int size_a)
{
	t_list	*lst_move;

	lst_move = NULL;
	while (cheapest->actual_position < (size_a + 1))
	{
		ft_lstadd_back_char(&lst_move, ft_lstnew_char("rrb"));
		cheapest->actual_position++;
	}
	while (inf->actual_position > 1)
	{
		ft_lstadd_back_char(&lst_move, ft_lstnew_char("ra"));
		inf->actual_position--;
	}
	return (lst_move);
}

t_list	*make_move_for_b(t_ilist *cheapest, t_ilist **list_b, t_ilist **list_a)
{
	t_ilist	*sup;
	t_list	*lst_move;

	lst_move = NULL;
	sup = closest_sup(cheapest, *list_a);
	if (sup->final_position < cheapest->final_position)
		sup = ft_min_pointer(*list_a);
	if (cheapest->move == 1)
		ft_lstadd_back_char(&lst_move, rr_move_for_b(cheapest, sup));
	else if (cheapest->move == 2)
		ft_lstadd_back_char(&lst_move, rrr_move_for_b(cheapest, sup,
				ft_lstsize(*list_b), ft_lstsize(*list_a)));
	else if (cheapest->move == 3)
		ft_lstadd_back_char(&lst_move, rb_rra_move(cheapest, sup,
				ft_lstsize(*list_a)));
	else
		ft_lstadd_back_char(&lst_move, rrb_ra_move(cheapest, sup,
				ft_lstsize(*list_b)));
	apply_move(lst_move, list_a, list_b);
	return (lst_move);
}
