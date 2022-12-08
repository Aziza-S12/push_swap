/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:24:04 by asadritd          #+#    #+#             */
/*   Updated: 2022/12/08 15:24:06 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			counter;
	unsigned char	charact;

	counter = 0;
	str = (unsigned char *)s;
	charact = (unsigned char)c;
	while (counter < n)
	{
		if (*str == charact)
		{
			return (str);
		}
		str ++;
		counter ++;
	}
	return (NULL);
}
