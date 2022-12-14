/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:19:53 by asadritd          #+#    #+#             */
/*   Updated: 2022/12/08 15:20:28 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <limits.h>
# include "../libftprintf/inc/ft_printf.h"
# include "../libftprintf/inc/libft.h"

typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	int				counter;
	int				counter2;
	int				len;
	struct s_stack	*next;	
}	t_stack;

//push-swap actions
void		ft_rotate_b(t_stack **stack_b, int flag);
void		ft_rotate_a(t_stack **stack_a, int flag);
void		ft_rotate_both(t_stack **stack_a, t_stack **stack_b);
void		ft_swap_stack(t_stack **stack);
void		ft_pb(t_stack **stack_a, t_stack **stack_b);
void		ft_pa(t_stack **stack_b, t_stack **stack_a);
void		ft_reverse_rotate_a(t_stack **stack_a, int flag);
void		ft_reverse_rotate_b(t_stack **stack_b, int flag);
void		ft_reverse_rotate_both(t_stack **stack_a, t_stack **stack_b);

//utils
int			ft_isdigit_mod(int c);
void		ft_swap(int *a, int *b);
int			find_len_of_arr(int *val);
int			find_absolute_value(int a);
int			len_of_list(t_stack **head);
t_stack		*lst_lstlast(t_stack *head);
long int	ft_atoi_mod(const char *str);
int			ft_strcmp(char *s1, char *s2);
void		free_all(t_stack *stack, int *arr);
void		free_list(t_stack *head);

//node scanning and checking
void		print_nodes_index(t_stack **head);
void		print_nodes_val(t_stack **head);
void		print_nodes_pos(t_stack **head);

//parser
int			check_dup(char **argv);
int			if_sorted(char **argv);
int			max_min_check(char **argv);
void		all_check(char **argv, int argc);
int			*check_for_entry(char **argv, int argc);
void		allocate_and_fill_a(t_stack **head, int *val, int l);

//sorting
void		final_sort(t_stack **a_stack);
void		sort_two(t_stack **stack_a);
void		sort_three_one(t_stack **stack_a);
int			get_lowest_index_pos(t_stack **stack);
int			get_maximum_stack_index(t_stack **stack);
int			*sort_bubble_index(int *values, int argc);
void		find_tp(t_stack **a_stack, t_stack **b_stack);
void		put_to_b(t_stack **stack_a, t_stack **stack_b);
void		final_actions(t_stack **a_stack, int lowest_pos);
void		sort_5_100(t_stack **stack_a, t_stack **stack_b);
void		assign_cost(t_stack **stack_a, t_stack **stack_b);
void		exec_actions(t_stack **a_stack, t_stack **b_stack);
void		find_tp_lowind(t_stack **a_stack, t_stack *node_b);
void		assign_index(int *sorted, t_stack **stack, int argc);
void		set_positions(t_stack **stack_a, t_stack **stack_b);

#endif