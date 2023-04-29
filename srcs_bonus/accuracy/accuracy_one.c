/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   accuracy_one.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:59:43 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 04:47:59 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// but d accuracy est de donner une note sur la liste
// savoir si le suivant est toujours au dessus de l autre
// si il y 3 nombre et que le score est de 2 alors
//le score est parfait et la liste est juste

// bonne accuracy c est lstsize - 1

int	accuracy_one(t_ilist *list)
{
	int	i;

	i = 0;
	while (list->next != NULL)
	{
		if (list->content <= (list->next)->content)
			i++;
		list = list->next;
	}
	return (i);
}
