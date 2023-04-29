/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_actual_position.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:53:19 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 00:59:28 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_actual_position(t_ilist *lst)
{
	t_ilist	*temp;
	int		passing;

	passing = lst->actual_position;
	temp = lst->next;
	lst->actual_position = temp->actual_position;
	temp->actual_position = passing;
}
