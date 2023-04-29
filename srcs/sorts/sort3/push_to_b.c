/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 22:45:39 by amonier           #+#    #+#             */
/*   Updated: 2023/04/28 22:45:40 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_b(t_ilist **lst_a, t_ilist **lst_b, t_list **lst_move)
{
	t_ilist	*cheapest;

	calculate_cheapest_for_a(*lst_a, *lst_b);
	cheapest = find_cheapest(*lst_a);
	ft_lstadd_back_char(lst_move, make_move_for_a(cheapest, lst_b, lst_a));
	push(lst_a, lst_b, lst_move, "pb");
}
