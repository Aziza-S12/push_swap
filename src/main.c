/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:34:20 by asadritd          #+#    #+#             */
/*   Updated: 2022/12/05 14:34:22 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		*q;
	int		*sorted;

	stack_a = NULL;
	stack_b = NULL;
	all_check(argv, argc);
	q = check_for_entry(argv, argc);
	allocate_and_fill_a(&stack_a, q, argc - 2);
	sorted = sort_bubble_index(q, argc);
	if (argc == 3 && stack_a->next > stack_a->next->next)
	{
		ft_swap_stack(&stack_a);
		return (0);
	}
	if (argc == 4)
	{
		sort_three_one(&stack_a);
		return (0);
	}
	assign_index(sorted, &stack_a, argc - 1);
	sort_5_100(&stack_a, &stack_b);
	free_all(stack_a, sorted);
	return (0);
}
