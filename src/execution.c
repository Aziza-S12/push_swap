/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execution.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:33:52 by asadritd          #+#    #+#             */
/*   Updated: 2022/12/05 14:33:54 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	do_double(t_stack **a_stack, t_stack **b_stack,
		int *cost_a, int *cost_b)
{
	while (*cost_a > 0 && *cost_b > 0)
	{
		ft_rotate_both(a_stack, b_stack);
		(*cost_a)--;
		(*cost_b)--;
	}
	while (*cost_a < 0 && *cost_b < 0)
	{
		ft_reverse_rotate_both(a_stack, b_stack);
		(*cost_a)++;
		(*cost_b)++;
	}	
}

void	do_a(t_stack **a_stack, int *cost_a)
{
	if (*cost_a != 0)
	{
		while (*cost_a > 0)
		{
			ft_rotate_a(a_stack, 1);
			(*cost_a)--;
		}
		while (*cost_a < 0)
		{
			ft_reverse_rotate_a(a_stack, 1);
			(*cost_a)++;
		}
	}
}

void	do_b(t_stack **b_stack, int *cost_b)
{
	if (*cost_b != 0)
	{
		while (*cost_b > 0)
		{
			ft_rotate_b(b_stack, 1);
			(*cost_b)--;
		}
		while (*cost_b < 0)
		{
			ft_reverse_rotate_b(b_stack, 1);
			(*cost_b)++;
		}
	}
}

void	exec_actions(t_stack **a_stack, t_stack **b_stack)
{
	t_stack	*node_b;
	int		lowest_cost;
	int		cost;
	int		cost_a;
	int		cost_b;

	node_b = *b_stack;
	lowest_cost = find_absolute_value(node_b->cost_a) + \
	find_absolute_value(node_b->cost_b);
	while (node_b)
	{
		cost = find_absolute_value(node_b->cost_a) + \
		find_absolute_value(node_b->cost_b);
		if (cost <= lowest_cost)
		{
			cost_a = node_b->cost_a;
			cost_b = node_b->cost_b;
			lowest_cost = cost;
		}
		node_b = node_b->next;
	}
	do_double(a_stack, b_stack, &cost_a, &cost_b);
	do_a(a_stack, &cost_a);
	do_b(b_stack, &cost_b);
}
