/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:24:44 by asadritd          #+#    #+#             */
/*   Updated: 2022/12/08 15:24:48 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*temp_dst;
	unsigned char	*temp_src;

	temp_dst = (unsigned char *) dst;
	temp_src = (unsigned char *) src;
	if (dst == src || len == 0 || !dst || !src)
	{
		return (dst);
	}
	if (temp_src > temp_dst)
	{
		ft_memcpy(dst, src, len);
		return (dst);
	}
	while (len > 0)
	{
		temp_dst[len - 1] = temp_src[len - 1];
		len--;
	}
	return (dst);
}
