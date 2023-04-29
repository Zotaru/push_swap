/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   just_digits.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 00:06:42 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 04:55:16 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

//check free lors de errors

void	just_digits(t_list **lst)
{
	int		i;
	t_list	*temp;

	temp = *lst;
	i = 0;
	while (temp)
	{
		if ((i == 0 && temp->content[i] == '-') || (i == 0
				&& temp->content[i] == '+'))
			i++;
		while (temp->content[i])
		{
			if (temp->content[i] < '0' || temp->content[i] > '9')
			{
				write(2, "Error\n", 6);
				free_lst_char(lst);
				exit(0);
			}
			i++;
		}
		i = 0;
		temp = temp->next;
	}
}
