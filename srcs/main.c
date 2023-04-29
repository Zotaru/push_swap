/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 02:40:31 by amonier           #+#    #+#             */
/*   Updated: 2023/04/28 00:35:51 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_ilist	*list_a;

	list_a = parsing(argc, argv);
	allocate_final_position(list_a);
	allocate_actual_position(list_a);
	allocate_chunk(list_a, 3);
	push_swap(&list_a);
	free_lst_int(&list_a);
	return (0);
}
