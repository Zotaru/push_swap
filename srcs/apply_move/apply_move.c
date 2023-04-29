/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_move.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:46:32 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 00:38:23 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	apply_move(t_list *lst_move, t_ilist **list_a, t_ilist **list_b)
{
	while (lst_move)
	{
		if ((lst_move->content)[0] == 's')
			s_move(lst_move->content, list_a, list_b);
		else if ((lst_move->content)[0] == 'p')
			p_move(lst_move->content, list_a, list_b);
		else
			r_rr_move(lst_move->content, list_a, list_b);
		lst_move = lst_move->next;
	}
}
