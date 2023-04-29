/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_double.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 00:05:54 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 04:58:00 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

// check free lors de error

static void	*print_error(int *tab, t_ilist **lst)
{
	write(2, "Error\n", 6);
	free(tab);
	free_lst_int(lst);
	exit(1);
}

static int	*lst_to_tab(t_ilist *lst)
{
	int	*tab;
	int	i;

	i = 0;
	tab = malloc(sizeof(int) * ft_lstsize(lst));
	if (tab == NULL)
		return (NULL);
	while (lst)
	{
		tab[i] = lst->content;
		i++;
		lst = lst->next;
	}
	return (tab);
}

void	check_double(t_ilist **lst)
{
	int	*tab;
	int	i;
	int	j;
	int	k;

	i = 0;
	tab = lst_to_tab(*lst);
	k = ft_lstsize(*lst);
	while (i <= (k - 2))
	{
		j = i + 1;
		while (j <= (k - 1))
		{
			if (tab[i] == tab[j])
				print_error(tab, lst);
			j++;
		}
		i++;
	}
	free(tab);
	return ;
}
