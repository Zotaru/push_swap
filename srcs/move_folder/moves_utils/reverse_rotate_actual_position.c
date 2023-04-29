/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_actual_position.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:53:04 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 00:58:45 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_actual_position(t_ilist *lst)
{
	lst->actual_position = 0;
	while (lst != NULL)
	{
		lst->actual_position += 1;
		lst = lst->next;
	}
}
