/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:35:04 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 00:34:51 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

t_ilist	*ft_lstlast(t_ilist *lst)
{
	t_ilist	*temp;

	if (lst == NULL)
		return (NULL);
	temp = lst;
	while (temp->next != 0)
		temp = temp->next;
	return (temp);
}
