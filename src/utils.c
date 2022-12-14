/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:34:49 by asadritd          #+#    #+#             */
/*   Updated: 2022/12/05 14:34:51 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	print_nodes_val(t_stack **head)
{
	t_stack	*temp;

	temp = *head;
	while (temp)
	{
		ft_printf("the value is: %i\n", temp->value);
		temp = temp->next;
	}
}

void	print_nodes_index(t_stack **head)
{
	t_stack	*temp;

	temp = *head;
	while (temp)
	{
		ft_printf("the value is: %i\n", temp->index);
		temp = temp->next;
	}
}

void	print_nodes_pos(t_stack **head)
{
	t_stack	*temp;

	temp = *head;
	while (temp)
	{
		ft_printf("the value is: %i\n", temp->pos);
		temp = temp->next;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	size_t	counter;

	counter = 0;
	while (s1[counter] != '\0' && s1[counter] == s2[counter])
	{
		counter++;
	}
	return ((unsigned char)s1[counter] - (unsigned char)s2[counter]);
}

//same is_digit but '-' is ok
int	ft_isdigit_mod(int c)
{
	if ((c <= '9' && c >= '0'))
	{
		return (1);
	}
	if (c == '-')
	{
		return (2);
	}
	else
	{
		return (0);
	}
}
