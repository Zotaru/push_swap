/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_move_for_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 02:41:29 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 05:49:42 by amonier          ###   ########.fr       */
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

static t_list	*ra_rrb_move(t_ilist *cheapest, t_ilist *inf, int size_b)
{
	t_list	*lst_move;

	lst_move = NULL;
	while (cheapest->actual_position > 1)
	{
		ft_lstadd_back_char(&lst_move, ft_lstnew_char("ra"));
		cheapest->actual_position--;
	}
	while (inf->actual_position < (size_b + 1))
	{
		ft_lstadd_back_char(&lst_move, ft_lstnew_char("rrb"));
		inf->actual_position++;
	}
	return (lst_move);
}

static t_list	*rra_rb_move(t_ilist *cheapest, t_ilist *inf, int size_a)
{
	t_list	*lst_move;

	lst_move = NULL;
	while (cheapest->actual_position < (size_a + 1))
	{
		ft_lstadd_back_char(&lst_move, ft_lstnew_char("rra"));
		cheapest->actual_position++;
	}
	while (inf->actual_position > 1)
	{
		ft_lstadd_back_char(&lst_move, ft_lstnew_char("rb"));
		inf->actual_position--;
	}
	return (lst_move);
}

t_list	*make_move_for_a(t_ilist *cheapest, t_ilist **list_b, t_ilist **list_a)
{
	t_ilist	*inf;
	t_list	*lst_move;

	lst_move = NULL;
	inf = closest_inf(cheapest, *list_b);
	if (inf->final_position > cheapest->final_position)
		inf = ft_max_pointer(*list_b);
	if (cheapest->move == 1)
		ft_lstadd_back_char(&lst_move, rr_move_for_a(cheapest, inf));
	else if (cheapest->move == 2)
		ft_lstadd_back_char(&lst_move, rrr_move_for_a(cheapest, inf,
				ft_lstsize(*list_a), ft_lstsize(*list_b)));
	else if (cheapest->move == 3)
		ft_lstadd_back_char(&lst_move, ra_rrb_move(cheapest, inf,
				ft_lstsize(*list_b)));
	else
		ft_lstadd_back_char(&lst_move, rra_rb_move(cheapest, inf,
				ft_lstsize(*list_a)));
	apply_move(lst_move, list_a, list_b);
	return (lst_move);
}
