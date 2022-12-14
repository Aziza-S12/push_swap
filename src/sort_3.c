/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:34:38 by asadritd          #+#    #+#             */
/*   Updated: 2022/12/05 14:34:40 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

//function sorts three numbers
void	sort_three_one(t_stack **stack_a)
{
	t_stack	*one;

	if (stack_a != NULL)
	{
		one = *stack_a;
		if ((one->value < one->next->value) && (one->value < one-> \
		next->next->value) && (one->next->value < one->next->next->value))
			return ;
		if ((one->next->value > one->value) && (one->next->value > \
			one->next->next->value) && (one->value < one->next->next->value))
		{
			ft_reverse_rotate_a(stack_a, 1);
			ft_swap_stack(stack_a);
			return ;
		}
		if ((one->value < one->next->next->value) && (one->next->value < \
			one->next->next->value) && (one->value > one->next->value))
		{
			ft_swap_stack(stack_a);
			return ;
		}
		sort_two(stack_a);
	}
}

//function assignes indexes to list
void	assign_index(int *sorted, t_stack **stack, int argc)
{
	t_stack	*temp;
	int		count;

	count = 0;
	while (count != argc)
	{
	temp = *stack;
		while (temp->value != sorted[count])
		{
			temp = temp->next;
		}
			temp->index = count + 1;
			count ++;
	}
}

void	sort_two(t_stack **stack_a)
{
	t_stack	*two;

	two = *stack_a;
	if ((two->value > two->next->value) && (two->value > \
	two->next->next->value) && (two->next->value > two->next->next->value))
	{
		ft_rotate_a(stack_a, 1);
		ft_swap_stack(stack_a);
		return ;
	}
	if ((two->value > two->next->value) && (two->value > \
	two->next->next->value) && (two->next->value < two->next->next->value))
	{
		ft_rotate_a(stack_a, 1);
		return ;
	}
	if ((two->value < two->next->value) && (two->value > \
	two->next->next->value) && (two->next->value > two->next->next->value))
	{
		ft_reverse_rotate_a(stack_a, 1);
		return ;
	}
}
