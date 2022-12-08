/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:21:52 by asadritd          #+#    #+#             */
/*   Updated: 2022/12/08 15:21:56 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	calc_bytes;

	calc_bytes = (count * size);
	if (count != 0 && (calc_bytes / count) != size)
	{
		return (NULL);
	}
	p = malloc(calc_bytes);
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		ft_bzero(p, calc_bytes);
		return (p);
	}
}
//first if is made because of the max int overlapping
