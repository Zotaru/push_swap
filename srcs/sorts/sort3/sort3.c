/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 02:41:08 by amonier           #+#    #+#             */
/*   Updated: 2023/04/28 23:04:16 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	size_hundred(t_ilist **lst_a, t_ilist **lst_b, t_list **lst_move)
{
	push_two_to_b(lst_move, lst_a, lst_b);
	while (ft_lstsize(*lst_a) > 3)
		push_to_b(lst_a, lst_b, lst_move);
	return ;
}

static int	chunk_min(t_ilist *lst_a)
{
	int	chunk;

	chunk = lst_a->chunk;
	while (lst_a)
	{
		if (lst_a->chunk < chunk)
			chunk = lst_a->chunk;
		lst_a = lst_a->next;
	}
	return (chunk);
}

static void	push_chunk_to_b(t_ilist **lst_a, t_ilist **lst_b, t_list **lst_move,
		int chunk)
{
	if ((*lst_a)->chunk == chunk)
		push(lst_a, lst_b, lst_move, "pb");
	else
		rotate(lst_a, lst_move, "ra");
	return ;
}

static void	size_five_hundred(t_ilist **lst_a, t_ilist **lst_b,
		t_list **lst_move, int chunk)
{
	while (ft_lstsize(*lst_a) > 3)
	{
		push_chunk_to_b(lst_a, lst_b, lst_move, chunk);
		if (chunk_min(*lst_a) != chunk)
			chunk++;
	}
	return ;
}

t_list	*sort3(t_ilist **list_a)
{
	t_list	*lst_move;
	t_ilist	*list_b;
	int		chunk;

	chunk = 1;
	list_b = NULL;
	lst_move = NULL;
	allocate_actual_position(*list_a);
	allocate_final_position(*list_a);
	allocate_chunk(*list_a, 3);
	if (ft_lstsize(*list_a) < 200)
		size_hundred(list_a, &list_b, &lst_move);
	else
		size_five_hundred(list_a, &list_b, &lst_move, chunk);
	ft_lstadd_back_char(&lst_move, three_nb(list_a));
	while (ft_lstsize(list_b) > 0)
		push_to_a(list_a, &list_b, &lst_move);
	rotate_a(list_a, &lst_move);
	return (lst_move);
}
