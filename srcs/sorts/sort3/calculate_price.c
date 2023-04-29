/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_price.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 02:41:37 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 02:41:41 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	lower_price(int rr, int rrr, int ra_rrb, int rra_rb)
{
	if (rr <= rrr && rr <= ra_rrb && rr <= rra_rb)
		return (rr);
	else if (rrr <= ra_rrb && rrr <= rra_rb)
		return (rrr);
	else if (ra_rrb <= rra_rb)
		return (ra_rrb);
	return (rra_rb);
}

/*
1 -> rr (ou ra ou rb pas vraiment finalement) ou rr + ra ou rr
	+ rb peut etre opi a faire ? 
2 -> rrr ou rra ou rrb ou rrr + rra ou rrr + rrb
3 -> ra + rrb
4 -> rra + rb
*/

static int	lower_move(int rr, int rrr, int ra_rrb, int rra_rb)
{
	if (rr <= rrr && rr <= ra_rrb && rr <= rra_rb)
		return (1);
	else if (rrr <= ra_rrb && rrr <= rra_rb)
		return (2);
	else if (ra_rrb <= rra_rb)
		return (3);
	return (4);
}

void	calculate_price(t_ilist *elem_list_a, t_ilist *inf_list_b, int sla,
		int slb)
{
	int	for_rr;
	int	for_rrr;
	int	for_ra_rrb;
	int	for_rra_rb;

	if (elem_list_a->actual_position >= inf_list_b->actual_position)
		for_rr = elem_list_a->actual_position - 1;
	else
		for_rr = inf_list_b->actual_position - 1;
	if ((sla - elem_list_a->actual_position + 1) >= (slb
			- inf_list_b->actual_position + 1))
		for_rrr = (sla - elem_list_a->actual_position + 1);
	else
		for_rrr = (slb - inf_list_b->actual_position + 1);
	for_ra_rrb = elem_list_a->actual_position - 1 + (slb
			- inf_list_b->actual_position + 1);
	for_rra_rb = (sla - elem_list_a->actual_position + 1)
		+ inf_list_b->actual_position - 1;
	elem_list_a->move = lower_move(for_rr, for_rrr, for_ra_rrb, for_rra_rb);
	elem_list_a->price = lower_price(for_rr, for_rrr, for_ra_rrb, for_rra_rb);
}
