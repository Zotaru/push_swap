/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_two_to_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 02:40:56 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 04:33:17 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_two_to_b(t_list **lst_move, t_ilist **list_a, t_ilist **list_b)
{
	push(list_a, list_b, lst_move, "pb");
	push(list_a, list_b, lst_move, "pb");
	return ;
}
