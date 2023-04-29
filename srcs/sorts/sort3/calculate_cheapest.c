/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_cheapest.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 01:50:26 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 02:41:54 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	calculate_cheapest_for_a(t_ilist *list_a, t_ilist *list_b)
{
	t_ilist	*inf;
	int		size_la;
	int		size_lb;

	size_la = ft_lstsize(list_a);
	size_lb = ft_lstsize(list_b);
	while (list_a)
	{
		inf = closest_inf(list_a, list_b);
		if (inf->final_position > list_a->final_position)
			inf = ft_max_pointer(list_b);
		calculate_price(list_a, inf, size_la, size_lb);
		list_a = list_a->next;
	}
}

void	calculate_cheapest_for_b(t_ilist *list_a, t_ilist *list_b)
{
	t_ilist	*sup;
	int		size_la;
	int		size_lb;

	size_la = ft_lstsize(list_a);
	size_lb = ft_lstsize(list_b);
	while (list_b)
	{
		sup = closest_sup(list_b, list_a);
		if (sup->final_position < list_b->final_position)
			sup = ft_min_pointer(list_a);
		calculate_price(list_b, sup, size_lb, size_la);
		list_b = list_b->next;
	}
}
