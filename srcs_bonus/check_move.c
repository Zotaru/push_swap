/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_move.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 05:06:47 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 05:06:48 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	print_error(t_list **lst_move, t_ilist **list_a)
{
	write(2, "Error\n", 6);
	free_lst_char(lst_move);
	free_lst_int(list_a);
	exit(1);
}

void	check_move(char *str, t_list **lst_move, t_ilist **list_a)
{
	if (!ft_strncmp(str, "ra\n", 3) || !ft_strncmp(str, "rb\n", 3))
		return ;
	else if (!ft_strncmp(str, "rr\n", 3))
		return ;
	else if (!ft_strncmp(str, "rra\n", 4) || !ft_strncmp(str, "rrb\n", 4))
		return ;
	else if (!ft_strncmp(str, "rrr\n", 4))
		return ;
	else if (!ft_strncmp(str, "pa\n", 3) || !ft_strncmp(str, "pb\n", 3))
		return ;
	else if (!ft_strncmp(str, "sa\n", 3) || !ft_strncmp(str, "sb\n", 3))
		return ;
	else if (!ft_strncmp(str, "ss\n", 3))
		return ;
	else
	{
		free(str);
		print_error(lst_move, list_a);
	}
	return ;
}
