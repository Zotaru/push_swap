/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_to_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 00:07:11 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 00:07:13 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
