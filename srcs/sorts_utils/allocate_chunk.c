/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate_chunk.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:57:11 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 23:54:21 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// enelver le size et test necessaire

// rendre le 5 modulable
// LIGNE 19 MODULABLE !!!!

void	allocate_chunk(t_ilist *lst, int nb_of_chunk)
{
	t_ilist	*temp;
	int		size_chunk;
	int		size;
	int		i;
	int		size_height;

	temp = lst;
	i = 1;
	size = ft_lstsize(lst);
	size_chunk = size / nb_of_chunk;
	size_height = size_chunk;
	while (i <= nb_of_chunk)
	{
		while (lst)
		{
			if (lst->final_position >= (size_chunk - size_height))
				lst->chunk = i;
			lst = lst->next;
		}
		i++;
		size_chunk = size_chunk + size_height;
		lst = temp;
	}
}

// if (lst->final_position >= (size_chunk - size_height)
// 	&& lst->final_position <= (size_chunk))
// 	lst->chunk = i;