/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_move_for_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 05:53:29 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 22:46:33 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	move_rr_rb(t_list **lst_move, t_ilist *cheapest, t_ilist *inf)
{
	while (inf->actual_position > 1)
	{
		ft_lstadd_back_char(lst_move, ft_lstnew_char("rr"));
		inf->actual_position--;
		cheapest->actual_position--;
	}
	while (cheapest->actual_position > 1)
	{
		ft_lstadd_back_char(lst_move, ft_lstnew_char("rb"));
		cheapest->actual_position--;
	}
	return ;
}

t_list	*rr_move_for_b(t_ilist *cheapest, t_ilist *inf)
{
	t_list	*lst_move;

	lst_move = NULL;
	if (cheapest->actual_position >= inf->actual_position)
		move_rr_rb(&lst_move, cheapest, inf);
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
			ft_lstadd_back_char(&lst_move, ft_lstnew_char("ra"));
			inf->actual_position--;
		}
	}
	return (lst_move);
}
