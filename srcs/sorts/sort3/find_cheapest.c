/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_cheapest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 02:41:22 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 04:07:41 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_ilist	*find_cheapest(t_ilist *list_a)
{
	t_ilist	*cheapest;

	cheapest = list_a;
	while (list_a)
	{
		if (cheapest->price > list_a->price)
			cheapest = list_a;
		list_a = list_a->next;
	}
	return (cheapest);
}
