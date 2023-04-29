/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 00:08:17 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 05:07:59 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	print_lst(t_ilist *lst)
{
	while (lst)
	{
		ft_printf("%d\n", lst->content);
		lst = lst->next;
	}
	ft_printf("a\n");
}

void	print_actual_position(t_ilist *lst)
{
	while (lst)
	{
		ft_printf("%d -> %d\n", lst->actual_position, lst->content);
		lst = lst->next;
	}
	ft_printf("actual position\n\n");
}

void	print_final_position(t_ilist *lst)
{
	while (lst)
	{
		ft_printf("%d\n", lst->final_position);
		lst = lst->next;
	}
	ft_printf("final position\n\n");
}

void	print_lst_char(t_list *lst)
{
	while (lst)
	{
		ft_printf("%s", lst->content);
		lst = lst->next;
	}
}

void	print_chunk(t_ilist *lst)
{
	while (lst)
	{
		ft_printf("%d appartient au chunk: %d\n", lst->final_position,
			lst->chunk);
		lst = lst->next;
	}
	ft_printf("les chunks");
}
