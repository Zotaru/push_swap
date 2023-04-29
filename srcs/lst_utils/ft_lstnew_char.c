/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:49:31 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 00:46:25 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew_char(char *value)
{
	t_list	*new;
	int		i;

	i = 0;
	new = malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = malloc(sizeof(char *) * ft_strlen(value));
	if (new->content == NULL)
		return (NULL);
	while (value[i])
	{
		new->content[i] = value[i];
		i++;
	}
	new->content[i] = '\0';
	new->next = NULL;
	return (new);
}
