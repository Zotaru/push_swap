/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 22:56:37 by amonier           #+#    #+#             */
/*   Updated: 2023/04/28 23:03:43 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_a(t_ilist **lst_a, t_ilist **lst_b, t_list **lst_move)
{
	t_ilist	*cheapest;

	calculate_cheapest_for_b(*lst_a, *lst_b);
	cheapest = find_cheapest(*lst_b);
	ft_lstadd_back_char(lst_move, make_move_for_b(cheapest, lst_b, lst_a));
	push(lst_b, lst_a, lst_move, "pa");
}
