/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:34:32 by asadritd          #+#    #+#             */
/*   Updated: 2022/12/05 14:34:34 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	*check_for_entry(char **argv, int argc)
{
	int	count;
	int	k;
	int	i;
	int	*q;

	i = 0;
	count = 1;
	q = (int *)malloc(sizeof(int) * (argc - 1));
	while (argv[count])
	{
	k = 0;
		while (argv[count][k])
		{
			if (ft_isdigit_mod(argv[count][k]) == 0)
				exit(write(2, "Error\n", 6));
			k++;
		}
		count++;
	}
	count = 1;
	while (argv[count])
		q[i++] = ft_atoi_mod(argv[count++]);
	return (q);
}

//returns 0 if number not an int, 1 if okay
int	max_min_check(char **argv)
{
	int			i;
	long int	atoied;

	i = 1;
	while (argv[i])
	{
		atoied = ft_atoi_mod(argv[i]);
		if (atoied < INT_MIN || atoied > INT_MAX)
		{
			return (0);
		}
		atoied = 0;
		i ++;
	}
	return (1);
}

//returns 1 if No duplicates, 0 if there are
int	check_dup(char **argv)
{
	int	i;
	int	j;
	int	len;

	i = 1;
	j = 2;
	while (argv[i])
	{
		while (argv[j])
		{
		len = ft_strlen(argv[i + 1]);
			if (len != 0)
			{
				if (ft_strcmp(argv[i], argv[j]) == 0)
					return (0);
				len = 0;
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

//function returns 1 if sorted, 0 if not
int	if_sorted(char **argv)
{
	int	i;
	int	first;
	int	second;

	i = 1;
	while (argv[i])
	{
		if (!argv[i + 1])
			break ;
		first = ft_atoi_mod(argv[i]);
		second = ft_atoi_mod(argv[i + 1]);
		if (first < second)
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

//function sorts values to assign indexes
int	*sort_bubble_index(int *values, int argc)
{
	int	i;
	int	j;
	int	*sort;

	i = 0;
	sort = values;
	while (i < argc - 2)
	{
	j = 0;
		while (j < argc - 2)
		{
			if (sort[j] > sort[j + 1])
				ft_swap(&sort[j], &sort[j + 1]);
		j++;
		}
	i++;
	}
	return (sort);
}
