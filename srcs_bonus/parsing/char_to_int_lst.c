/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_to_int_lst.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 00:05:45 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 04:54:16 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

// check free lors de error

t_ilist	*char_to_int_lst(t_list **lst)
{
	t_ilist		*new;
	t_list		*temp;
	long long	v;

	temp = *lst;
	new = NULL;
	while (temp)
	{
		v = ft_atoi_long(temp->content);
		if (v > INT_MAX || v < INT_MIN)
		{
			write(2, "Error\n", 6);
			free_lst_int(&new);
			free_lst_char(lst);
			exit(0);
			return (NULL);
		}
		ft_lstadd_back(&new, ft_lstnew(v));
		temp = temp->next;
	}
	return (new);
}
