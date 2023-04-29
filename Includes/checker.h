/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:45:31 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 00:34:51 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../libft/Includes/libft.h"
# include <limits.h>

void		r_rr_move(char *str, t_ilist **list_a, t_ilist **list_b);
void		p_move(char *str, t_ilist **list_a, t_ilist **list_b);
void		s_move(char *str, t_ilist **list_a, t_ilist **list_b);
void		apply_move(t_list *lst_move, t_ilist **list_a, t_ilist **list_b);

//lst
//char:
void		free_lst_char(t_list **lst);
t_list		*ft_lstlast_char(t_list *list);
t_list		*ft_lstnew_char(char *value);
void		ft_lstadd_back_char(t_list **list, t_list *new);
int			ft_lstsize_char(t_list *lst);
//int:
void		free_lst_int(t_ilist **lst);

//fonction math
int			ft_min_content(t_ilist *list);
int			ft_min_actual_position(t_ilist *list); //a verifier
int			ft_min_final_position(t_ilist *list); // a verifier
t_ilist		*ft_min_pointer(t_ilist *list); //a verifier
int			ft_max_content(t_ilist *list);
int			ft_max_actual_position(t_ilist *list); // a verifier
int			ft_max_final_position(t_ilist *list);// a verifier
t_ilist		*ft_max_pointer(t_ilist *list); // a verifier 
int			ft_mean_content(t_ilist *list);
int			ft_mean_actual_position(t_ilist *list); // a verifier 
int			ft_median_content(t_ilist *list);
int			ft_median_actual_position(t_ilist *list); // a verfier

//parsing
t_list		*tab_to_list(int argc, char **argv, int init);
void		just_digits(t_list **lst);
long long	ft_atoi_long(const char *string);
t_ilist		*char_to_int_lst(t_list **lst);
void		check_double(t_ilist **lst);
void		error_arg_number(int argc);
void		free_double_tab(char **tab);
int			size_tab(char **tab);
t_ilist		*parsing(int argc, char **argv);

void		check_minus_plus(t_list **lst);

// fonction de la main_utils
void		print_lst(t_ilist *lst);
void		print_actual_position(t_ilist *lst);
void		print_final_position(t_ilist *lst);
void		print_lst_char(t_list *lst);
void		print_chunk(t_ilist *lst);

// fonction qui de savoir si on est proche du bon resultat ou pas 
int			accuracy_one(t_ilist *list);

// check move 
void		check_move(char *str, t_list **lst_move, t_ilist **list_a);

#endif 