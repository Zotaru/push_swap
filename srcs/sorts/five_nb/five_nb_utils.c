/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_nb_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 04:12:52 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 05:36:02 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_min(int *min1, int *min2, int *min3, t_ilist *list_a)
{
	*min1 = ft_min_content(list_a);
	*min2 = ft_min_next(list_a, *min1);
	*min3 = ft_min_next(list_a, *min2);
	return ;
}

void	two_min(int *min1, int *min2, t_ilist *list_a)
{
	*min1 = ft_min_content(list_a);
	*min2 = ft_min_next(list_a, *min1);
	return ;
}

void	size_of_6(t_ilist **list_a, t_ilist **list_b, t_list **move_lst)
{
	int	min1;
	int	min2;
	int	min3;
	int	i;

	three_min(&min1, &min2, &min3, *list_a);
	i = 0;
	while (i != 3)
	{
		if ((*list_a)->content == min1 || (*list_a)->content == min2
			|| (*list_a)->content == min3)
		{
			push(list_a, list_b, move_lst, "pb");
			i++;
		}
		else
			rotate(list_a, move_lst, "ra");
	}
	ft_lstadd_back_char(move_lst, three_nb(list_a));
	ft_lstadd_back_char(move_lst, three_nb_for_b(list_b));
	push(list_b, list_a, move_lst, "pa");
	push(list_b, list_a, move_lst, "pa");
	push(list_b, list_a, move_lst, "pa");
}

void	size_of_5(t_ilist **list_a, t_ilist **list_b, t_list **move_lst)
{
	int	min1;
	int	min2;
	int	i;

	two_min(&min1, &min2, *list_a);
	i = 0;
	while (i != 2)
	{
		if ((*list_a)->content == min1 || (*list_a)->content == min2)
		{
			push(list_a, list_b, move_lst, "pb");
			i++;
		}
		else
			rotate(list_a, move_lst, "ra");
	}
	ft_lstadd_back_char(move_lst, three_nb(list_a));
	ft_lstadd_back_char(move_lst, two_nb_for_b(list_b));
	push(list_b, list_a, move_lst, "pa");
	push(list_b, list_a, move_lst, "pa");
}

void	size_of_4(t_ilist **list_a, t_ilist **list_b, t_list **move_lst)
{
	int	min1;
	int	min2;
	int	i;

	two_min(&min1, &min2, *list_a);
	i = 0;
	while (i != 2)
	{
		if ((*list_a)->content == min1 || (*list_a)->content == min2)
		{
			push(list_a, list_b, move_lst, "pb");
			i++;
		}
		else
			rotate(list_a, move_lst, "ra");
	}
	ft_lstadd_back_char(move_lst, two_nb(list_a));
	ft_lstadd_back_char(move_lst, two_nb_for_b(list_b));
	push(list_b, list_a, move_lst, "pa");
	push(list_b, list_a, move_lst, "pa");
}
