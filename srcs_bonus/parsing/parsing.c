/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 00:06:48 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 04:56:43 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_ilist	*parsing(int argc, char **argv)
{
	t_list	*unparsed_lst;
	t_ilist	*new;
	char	**tab_split;
	int		i;

	i = 1;
	new = NULL;
	unparsed_lst = NULL;
	error_arg_number(argc);
	while (i < argc)
	{
		tab_split = ft_split(argv[i], ' ');
		ft_lstadd_back_char(&unparsed_lst, tab_to_list(size_tab(tab_split),
				tab_split, 0));
		free_double_tab(tab_split);
		i++;
	}
	check_minus_plus(&unparsed_lst);
	just_digits(&unparsed_lst);
	new = char_to_int_lst(&unparsed_lst);
	free_lst_char(&unparsed_lst);
	check_double(&new);
	return (new);
}
