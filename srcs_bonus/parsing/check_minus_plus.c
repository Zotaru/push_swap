/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_minus_plus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 00:06:07 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 04:54:45 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	check_minus_plus(t_list **lst)
{
	t_list	*temp;

	temp = *lst;
	while (temp)
	{
		if (ft_strlen((temp)->content) == 1)
		{
			if (((temp)->content)[0] == '-' || ((temp)->content)[0] == '+')
			{
				write(2, "Error\n", 6);
				free_lst_char(lst);
				exit(0);
			}
		}
		temp = (temp)->next;
	}
	return ;
}
