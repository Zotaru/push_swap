/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_nb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 05:17:13 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 05:25:48 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// il y a 6 cas possible i on a 3 chiffres
// 1 2 3 rien a faire
// 1 3 2 juste un sa puis un ra
// 2 1 3 juste un sa
// 2 3 1 juste un rra
// 3 1 2 juste un ra
// 3 2 1 juste un sa puis un rra
// return NULL si pas de movements a faire
// cette fonction peut gerer 2 et 3 elements
// ne gere pas les 1 element donc une fonction sort2
// qui fais en fonction de la taille

static void	min_first(t_ilist **list_a, t_list **move_lst)
{
	if (((*list_a)->next)->final_position == ft_max_final_position(*list_a))
	{
		swap(list_a, move_lst, "sa");
		rotate(list_a, move_lst, "ra");
	}
	else
		return ;
}

t_list	*three_nb(t_ilist **list_a)
{
	t_list	*move_lst;

	move_lst = NULL;
	if ((*list_a)->final_position == ft_min_final_position(*list_a))
		min_first(list_a, &move_lst);
	else if ((*list_a)->final_position == ft_max_final_position(*list_a))
	{
		if (((*list_a)->next)->final_position == ft_min_final_position(*list_a))
			rotate(list_a, &move_lst, "ra");
		else
		{
			swap(list_a, &move_lst, "sa");
			reverse_rotate(list_a, &move_lst, "rra");
		}
	}
	else
	{
		if (((*list_a)->next)->final_position == ft_min_final_position(*list_a))
			swap(list_a, &move_lst, "sa");
		else
			reverse_rotate(list_a, &move_lst, "rra");
	}
	return (move_lst);
}
