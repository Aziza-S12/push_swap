/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:27:31 by asadritd          #+#    #+#             */
/*   Updated: 2022/12/08 15:27:34 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	o;
	size_t	i;
	char	*str;

	i = 0;
	if (!s || !f)
		return (0);
	o = ft_strlen(s);
	str = ((char *)malloc(sizeof(char) * (o + 1)));
	if (!str)
		return (0);
	while (i < o)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
