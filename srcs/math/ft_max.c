/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:49:47 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 00:54:01 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_max_content(t_ilist *list)
{
	int	max;

	max = list->content;
	while (list)
	{
		if (max < list->content)
			max = list->content;
		list = list->next;
	}
	return (max);
}

// fonction a checker et verifier
int	ft_max_actual_position(t_ilist *list)
{
	int	max;
	int	actual;

	max = list->content;
	actual = list->actual_position;
	while (list)
	{
		if (max < list->content)
		{
			max = list->content;
			actual = list->actual_position;
		}
		list = list->next;
	}
	return (actual);
}

int	ft_max_final_position(t_ilist *list)
{
	int	max;
	int	final;

	max = list->content;
	final = list->final_position;
	while (list)
	{
		if (max < list->content)
		{
			max = list->content;
			final = list->final_position;
		}
		list = list->next;
	}
	return (final);
}

t_ilist	*ft_max_pointer(t_ilist *list)
{
	t_ilist	*max;

	max = list;
	while (list)
	{
		if (max->final_position < list->final_position)
			max = list;
		list = list->next;
	}
	return (max);
}
