/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:27:52 by asadritd          #+#    #+#             */
/*   Updated: 2022/12/08 15:28:04 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*temo;

	i = 0;
	temo = (char *)haystack;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (temo[i] && i < len)
	{
		j = 0;
		while (temo[i + j] == needle[j] && len - i >= ft_strlen(needle))
		{
			if (needle[j + 1] == '\0')
			{
				return (&temo[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
