/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_actual_position.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:53:13 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 00:58:22 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_actual_position(t_ilist *lst)
{
	int	count;

	count = ft_lstsize(lst);
	while (lst->next != NULL)
	{
		lst->actual_position -= 1;
		lst = lst->next;
	}
	lst->actual_position = count;
}
