/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 19:11:56 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 00:34:51 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

t_ilist	*ft_lstnew(int content)
{
	t_ilist	*result;

	result = malloc(sizeof(t_ilist));
	if (result == NULL)
		return (NULL);
	result->content = content;
	result->actual_position = 0;
	result->final_position = 0;
	result->next = NULL;
	return (result);
}
