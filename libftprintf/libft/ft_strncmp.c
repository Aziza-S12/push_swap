/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:27:38 by asadritd          #+#    #+#             */
/*   Updated: 2022/12/08 15:27:48 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	counter;

	counter = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[counter] != '\0' && s1[counter] == s2[counter] && counter < n - 1)
	{
		counter++;
	}
	return ((unsigned char)s1[counter] - (unsigned char)s2[counter]);
}
