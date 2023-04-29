# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amonier <amonier@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/16 22:27:42 by amonier           #+#    #+#              #
#    Updated: 2023/04/28 23:12:59 by amonier          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap

NAME_BONUS	= checker

DIR_SRCS	= srcs

DIR_BONUS	= srcs_bonus

DIR_OBJS	= obj

DIR_OBJS_B	= obj_bonus

SRCS_NAMES		=	\
	push_swap.c		\
	main.c			\
	main_utils.c	\
	duplicate_lst.c	\
	sorts_utils/allocate_actual_position.c	\
	sorts_utils/allocate_final_position.c	\
	sorts_utils/allocate_chunk.c			\
	sorts/three_nb/three_nb.c						\
	sorts/three_nb/three_nb_for_b.c						\
	sorts/five_nb/five_nb_utils.c							\
	sorts/five_nb/five_nb.c							\
	sorts/two_nb/two_nb.c									\
	sorts/sort3/sort3.c														\
	sorts/sort3/push_two_to_b.c												\
	sorts/sort3/calculate_cheapest.c										\
	sorts/sort3/calculate_price.c											\
	sorts/sort3/find_cheapest.c												\
	sorts/sort3/make_move_for_a.c											\
	sorts/sort3/rr_move_for_a.c											\
	sorts/sort3/rrr_move_for_a.c											\
	sorts/sort3/make_move_for_b.c											\
	sorts/sort3/rr_move_for_b.c											\
	sorts/sort3/rrr_move_for_b.c											\
	sorts/sort3/rotate_a.c													\
	sorts/sort3/closest_sup.c					\
	sorts/sort3/closest_inf.c					\
	sorts/sort3/push_to_b.c					\
	sorts/sort3/push_to_a.c					\
	parsing/char_to_int_lst.c			\
	parsing/check_double.c				\
	parsing/error_arg_number.c			\
	parsing/free_double_tab.c			\
	parsing/ft_atoi_long.c				\
	parsing/just_digits.c				\
	parsing/parsing.c					\
	parsing/size_tab.c					\
	parsing/tab_to_list.c				\
	parsing/check_minus_plus.c			\
	move_folder/moves_utils/reverse_rotate_actual_position.c	\
	move_folder/moves_utils/rotate_actual_position.c			\
	move_folder/moves_utils/swap_actual_position.c				\
	move_folder/moves/swap.c								\
	move_folder/moves/rotate.c								\
	move_folder/moves/reverse_rotate.c						\
	move_folder/moves/push.c								\
	move_folder/moves/double_swap.c							\
	move_folder/moves/double_rotate.c						\
	move_folder/moves/double_reverse_rotate.c				\
	math/ft_max.c		\
	math/ft_mean.c		\
	math/ft_median.c	\
	math/ft_min.c		\
	lst_utils/free_lst_char.c			\
	lst_utils/free_lst_int.c			\
	lst_utils/ft_lstadd_back_char.c		\
	lst_utils/ft_lstlast_char.c			\
	lst_utils/ft_lstnew_char.c			\
	lst_utils/ft_lstsize_char.c			\
	apply_move/apply_move.c					\
	apply_move/p_move.c						\
	apply_move/r_rr_move.c					\
	apply_move/s_move.c						\
	accuracy/accuracy_one.c

BONUS_SRCS_NAMES	=	\
	main.c	\
	main_utils.c	\
	parsing/char_to_int_lst.c			\
	parsing/check_double.c				\
	parsing/error_arg_number.c			\
	parsing/free_double_tab.c			\
	parsing/ft_atoi_long.c				\
	parsing/just_digits.c				\
	parsing/parsing.c					\
	parsing/size_tab.c					\
	parsing/tab_to_list.c				\
	parsing/check_minus_plus.c			\
	apply_move/apply_move.c					\
	apply_move/p_move.c						\
	apply_move/r_rr_move.c					\
	apply_move/s_move.c						\
	lst_utils/free_lst_char.c			\
	lst_utils/free_lst_int.c			\
	lst_utils/ft_lstadd_back_char.c		\
	lst_utils/ft_lstlast_char.c			\
	lst_utils/ft_lstnew_char.c			\
	lst_utils/ft_lstsize_char.c			\
	accuracy/accuracy_one.c	\
	check_move.c

OBJS_NAMES	= ${SRCS_NAMES:.c=.o}

OBJS_NAMES_B	= ${BONUS_SRCS_NAMES:.c=.o}

SRCS		= $(addprefix $(DIR_SRCS)/,$(SRCS_NAMES))

SRCS_B		= $(addprefix $(DIR_BONUS)/,$(BONUS_SRCS_NAMES))

OBJS		= $(addprefix $(DIR_OBJS)/,$(OBJS_NAMES))

OBJS_BONUS	= $(addprefix $(DIR_OBJS_B)/,$(OBJS_NAMES_B))

CC			= cc -g3
CFLAGS		= -Wall -Wextra -Werror
HEAD		= -IIncludes

RM			= rm -f
# MAKEFLAGS	= --no-print-directory
DIR_DUP		= mkdir -p $(@D)

all: $(NAME)

$(NAME): $(OBJS)
	make -C libft
	$(CC) $(CFLAGS) $(OBJS) libft/libft.a -o $(NAME)
	$(info CREATED $(NAME))
	@echo "\033[34;5mpushswap\033[0m"

$(DIR_OBJS)/%.o: $(DIR_SRCS)/%.c
	$(DIR_DUP)
	$(CC) $(CFLAGS) $(HEAD) -c $< -o $@
	$(info CREATED $@)

bonus: all $(NAME_BONUS)

$(NAME_BONUS): $(OBJS_BONUS)
	make -C libft
	$(CC) $(CFLAGS) $(OBJS_BONUS) libft/libft.a -o $(NAME_BONUS)
	$(info CREATED $(NAME_BONUS))
	@echo "\033[34;5mpushswap BONUS\033[0m"

	
$(DIR_OBJS_B)/%.o: $(DIR_BONUS)/%.c
	$(DIR_DUP)
	$(CC) $(CFLAGS) $(HEAD) -c $< -o $@
	$(info CREATED $@)

clean:
	$(RM) $(OBJS)
	$(RM) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(NAME_BONUS)


re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re
.SILENT:
