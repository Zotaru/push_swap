/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mean.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:49:59 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 00:34:50 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_mean_content(t_ilist *list)
{
	int	nbr;
	int	mean;

	nbr = ft_lstsize(list);
	mean = 0;
	while (list)
	{
		mean += list->content;
		list = list->next;
	}
	mean = mean / nbr;
	return (mean);
}

// a verifier :
// j arrondis toujours au superieur a partir de 0,1 donc peut faire mieux

int	ft_mean_actual_position(t_ilist *list)
{
	int	mean;
	int	actual;

	mean = ft_mean_content(list);
	while (list)
	{
		if (mean >= list->content && mean <= (list->next)->content)
		{
			if (mean == list->content)
				actual = list->actual_position;
			else
				actual = (list->next)->actual_position;
		}
		list = list->next;
	}
	return (actual);
}
