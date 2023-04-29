/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:45:02 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 05:06:00 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	validation(t_ilist *list_a, int size)
{
	if (accuracy_one(list_a) == size - 1)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	return ;
}

int	main(int argc, char **argv)
{
	t_ilist	*list_a;
	t_ilist	*list_b;
	t_list	*list_move;
	char	*str;
	int		size;

	list_a = parsing(argc, argv);
	size = ft_lstsize(list_a);
	list_b = NULL;
	list_move = NULL;
	str = get_next_line(0);
	while (str)
	{
		check_move(str, &list_move, &list_a);
		ft_lstadd_back_char(&list_move, ft_lstnew_char(str));
		free(str);
		str = get_next_line(0);
		if (!str)
			break ;
	}
	apply_move(list_move, &list_a, &list_b);
	validation(list_a, size);
	free_lst_int(&list_a);
	free_lst_char(&list_move);
	return (0);
}
