/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 02:41:21 by amonier           #+#    #+#             */
/*   Updated: 2023/04/28 22:57:02 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/Includes/libft.h"
# include <limits.h>

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

//lst
//char:
void		free_lst_char(t_list **lst);
t_list		*ft_lstlast_char(t_list *list);
t_list		*ft_lstnew_char(char *value);
void		ft_lstadd_back_char(t_list **list, t_list *new);
int			ft_lstsize_char(t_list *lst);
//int:
void		free_lst_int(t_ilist **lst);

// fonction mouvement:
void		swap(t_ilist **list, t_list **move_lst, char *str);
void		double_swap(t_ilist **list_a, t_ilist **list_b, t_list **move_lst);
void		push(t_ilist **list1, t_ilist **list2, t_list **move_lst,
				char *str);
void		rotate(t_ilist **list, t_list **move_lst, char *str);
void		double_rotate(t_ilist **list_1, t_ilist **list_2,
				t_list **move_lst);
void		reverse_rotate(t_ilist **list, t_list **move_lst, char *str);
void		double_reverse_rotate(t_ilist **list_1, t_ilist **list_2,
				t_list **move_lst);

//fonction mouvement utils:
void		swap_actual_position(t_ilist *lst);
void		rotate_actual_position(t_ilist *lst);
void		reverse_rotate_actual_position(t_ilist *lst);

//fonction math
int			ft_min_content(t_ilist *list);
int			ft_min_actual_position(t_ilist *list);
int			ft_min_final_position(t_ilist *list);
t_ilist		*ft_min_pointer(t_ilist *list);
int			ft_max_content(t_ilist *list);
int			ft_max_actual_position(t_ilist *list);
int			ft_max_final_position(t_ilist *list);
t_ilist		*ft_max_pointer(t_ilist *list);
int			ft_mean_content(t_ilist *list);
int			ft_mean_actual_position(t_ilist *list);
int			ft_median_content(t_ilist *list);
int			ft_median_actual_position(t_ilist *list);

// fonction qui de savoir si on est proche du bon resultat ou pas
int			accuracy_one(t_ilist *list);

// fonction d allocation des postion actual et final,
// permettent l utilisation des sorts:
// et allocation de chunk
void		allocate_actual_position(t_ilist *list);
int			ft_min_next(t_ilist *list, int min_actual);
void		allocate_final_position(t_ilist *list);
void		allocate_chunk(t_ilist *lst, int nb_of_chunk);

// fonction de la main_utils
void		print_lst(t_ilist *lst);
void		print_actual_position(t_ilist *lst);
void		print_final_position(t_ilist *lst);
void		print_lst_char(t_list *lst);
void		print_chunk(t_ilist *lst);

//--------
// second tri:

t_list		*two_nb(t_ilist **list_a);
t_list		*two_nb_for_b(t_ilist **list_b);

t_list		*three_nb(t_ilist **list_a);
t_list		*three_nb_for_b(t_ilist **list_b);

t_list		*five_nb(t_ilist **list_a);
void		size_of_4(t_ilist **list_a, t_ilist **list_b, t_list **move_lst);
void		size_of_5(t_ilist **list_a, t_ilist **list_b, t_list **move_lst);
void		size_of_6(t_ilist **list_a, t_ilist **list_b, t_list **move_lst);
void		two_min(int *min1, int *min2, t_ilist *list_a);
void		three_min(int *min1, int *min2, int *min3, t_ilist *list_a);

// t_list		*sort2(t_ilist **list_a);
// t_list		*hundred_number(t_ilist **list_a);
// t_list		*five_hundred_number(t_ilist **list_a);

// t_ilist		*find_first_of_chunk(t_ilist *lst, int chunk_nb);
// t_ilist		*find_last_of_chunk(t_ilist *lst, int chunk_nb);
// t_list		*find_move_for_a(t_ilist *position, int size);
// t_ilist		*best_move(t_ilist *first, t_ilist *last, t_list **move_lst,
// 				int size);
// t_list		*move_chunk(t_ilist **list_a, t_ilist **list_b, t_ilist *first,
// 				t_ilist *last);
// void		chunk_to_b(t_ilist **list_a, t_ilist **list_b, t_list **move_lst,
// 				int nb_of_chunk);

// opti de b:
// void		move_for_b(t_list **move_b, t_ilist *inf, t_ilist *list_b);
t_ilist		*closest_inf(t_ilist *best, t_ilist *list_b);
t_ilist		*closest_sup(t_ilist *best, t_ilist *list_b);
// void		equal_len(t_list **lst_move_a, t_list **move_b, int size_str);
// void		opti_for_b(t_list **lst_move, t_ilist *best, t_ilist **list_b);

//--------

//--------
// troisieme tri:

t_list		*sort3(t_ilist **list_a);
void		push_two_to_b(t_list **lst_move, t_ilist **list_a,
				t_ilist **list_b);
void		calculate_price(t_ilist *elem_list_a, t_ilist *inf_list_b, int sla,
				int slb);
void		calculate_cheapest_for_a(t_ilist *list_a, t_ilist *list_b);
t_ilist		*find_cheapest(t_ilist *list_a);
t_list		*make_move_for_a(t_ilist *cheapest, t_ilist **list_b,
				t_ilist **list_a);
t_list		*rr_move_for_a(t_ilist *cheapest, t_ilist *inf);
t_list		*rrr_move_for_a(t_ilist *cheapest, t_ilist *inf, int size_a,
				int size_b);

t_list		*make_move_for_b(t_ilist *cheapest, t_ilist **list_b,
				t_ilist **list_a);
t_list		*rr_move_for_b(t_ilist *cheapest, t_ilist *inf);
t_list		*rrr_move_for_b(t_ilist *cheapest, t_ilist *inf, int size_a,
				int size_b);

void		rotate_a(t_ilist **list_a, t_list **lst_move);

void		calculate_cheapest_for_b(t_ilist *list_a, t_ilist *list_b);

void		push_to_b(t_ilist **lst_a, t_ilist **lst_b, t_list **lst_move);
void		push_to_a(t_ilist **lst_a, t_ilist **lst_b, t_list **lst_move);

//--------

// pour le push swap
t_ilist		*duplicate_lst(t_ilist *lst);
void		push_swap(t_ilist **list_a);

// application des mov dans push swap
void		r_rr_move(char *str, t_ilist **list_a, t_ilist **list_b);
void		p_move(char *str, t_ilist **list_a, t_ilist **list_b);
void		s_move(char *str, t_ilist **list_a, t_ilist **list_b);
void		apply_move(t_list *lst_move, t_ilist **list_a, t_ilist **list_b);

#endif