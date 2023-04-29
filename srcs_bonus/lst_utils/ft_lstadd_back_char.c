/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_char.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 00:04:16 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 04:49:53 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_lstadd_back_char(t_list **list, t_list *new)
{
	t_list	*temp;

	if (!new)
		return ;
	if (list)
	{
		if (*list)
		{
			temp = ft_lstlast_char(*list);
			temp->next = new;
		}
		else
			*list = new;
	}
}
