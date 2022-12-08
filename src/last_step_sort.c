/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_step_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:34:14 by asadritd          #+#    #+#             */
/*   Updated: 2022/12/05 14:34:16 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	final_actions(t_stack **a_stack, int lowest_pos)
{
	int		stack_size;

	stack_size = len_of_list(a_stack);
	if (lowest_pos > stack_size / 2)
	{
		while (lowest_pos < stack_size)
		{
			ft_reverse_rotate_a(a_stack, 1);
			lowest_pos++;
		}
	}
	else
	{
		while (lowest_pos > 0)
		{
			ft_rotate_a(a_stack, 1);
			lowest_pos--;
		}
	}
}

void	final_sort(t_stack **a_stack)
{
	t_stack	*node_a;
	int		lowest_pos;

	node_a = *a_stack;
	lowest_pos = 0;
	while (node_a)
	{
		if (node_a->index == 1)
			break ;
		lowest_pos++;
		node_a = node_a->next;
	}
	final_actions(a_stack, lowest_pos);
}
