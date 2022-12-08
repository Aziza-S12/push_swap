/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:27:06 by asadritd          #+#    #+#             */
/*   Updated: 2022/12/08 15:27:24 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	count;
	size_t	length;

	length = ft_strlen(src);
	if (!dst)
	{
		return (length);
	}
	count = 0;
	if (dstsize > 0)
	{
		while ((src[count] != '\0') && (count < (dstsize - 1)))
		{
			dst[count] = src[count];
			count++;
		}
		if (dstsize > 0)
		{
		dst[count] = '\0';
		}
	}
	return (length);
}
