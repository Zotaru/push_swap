/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_to_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:56:20 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 02:23:35 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*tab_to_list(int argc, char **argv, int init)
{
	t_list	*list;

	list = NULL;
	while (init < argc)
	{
		ft_lstadd_back_char(&list, ft_lstnew_char(argv[init]));
		init++;
	}
	return (list);
}
