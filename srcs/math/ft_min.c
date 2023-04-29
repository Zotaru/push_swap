/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:50:20 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 00:54:36 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min_content(t_ilist *list)
{
	int	min;

	min = list->content;
	while (list)
	{
		if (min > list->content)
			min = list->content;
		list = list->next;
	}
	return (min);
}

// en faire un autre avec l actual position
// a checker
int	ft_min_actual_position(t_ilist *list)
{
	int	min;
	int	actual;

	min = list->content;
	actual = list->actual_position;
	while (list)
	{
		if (min > list->content)
		{
			min = list->content;
			actual = list->actual_position;
		}
		list = list->next;
	}
	return (actual);
}

int	ft_min_final_position(t_ilist *list)
{
	int	min;
	int	final;

	min = list->content;
	final = list->final_position;
	while (list)
	{
		if (min > list->content)
		{
			min = list->content;
			final = list->final_position;
		}
		list = list->next;
	}
	return (final);
}

t_ilist	*ft_min_pointer(t_ilist *list)
{
	t_ilist	*min;

	min = list;
	while (list)
	{
		if (min->final_position > list->final_position)
			min = list;
		list = list->next;
	}
	return (min);
}
