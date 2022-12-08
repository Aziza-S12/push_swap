/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:21:35 by asadritd          #+#    #+#             */
/*   Updated: 2022/12/08 15:21:49 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>
// #include <unistd.h>
// #include <string.h>
#include "libft.h"

void	ft_bzero(void *s, unsigned int n)
{
	unsigned int	i;
	unsigned char	*change;

	i = 0;
	change = (unsigned char *)s;
	while (i < n)
	{
		*change = '\0';
		change ++;
		i ++;
	}
}
