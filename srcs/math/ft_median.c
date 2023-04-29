/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_median.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:50:12 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 00:55:31 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_median_content(t_ilist *list)
{
	int	i;

	i = ft_lstlast(list)->actual_position;
	if (i % 2)
	{
		i -= 1;
		i = i / 2;
		while (list->actual_position != i)
			list = list->next;
		return ((list->next)->content);
	}
	else
	{
		i = i / 2;
		while (list->actual_position != i)
			list = list->next;
		return (((list->content) + (list->next)->content) / 2);
	}
}

int	ft_median_actual_position(t_ilist *list)
{
	int	median;
	int	actual;

	median = ft_median_content(list);
	while (list)
	{
		if (median >= list->content && median <= (list->next)->content)
		{
			if (median == list->content)
				actual = list->actual_position;
			else
				actual = list->actual_position;
		}
		list = list->next;
	}
	return (actual);
}
