/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:24:37 by asadritd          #+#    #+#             */
/*   Updated: 2022/12/08 15:24:40 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned char	*src1;
	unsigned char	*dest1;
	unsigned int	counter;

	counter = 0;
	src1 = (unsigned char *)src;
	dest1 = (unsigned char *)dest;
	if (dest1 == NULL && src1 == NULL)
	{
		return (dest);
	}
	while (counter < n)
	{
		dest1[counter] = src1[counter];
		counter ++;
	}
	return (dest);
}

// int main (void){

// char b[100] = "iwuherjweiorj";
// char a[100];
// ft_memcpy(a, b, 13);
// write (1, a, 13);
// write(1, "\n", 1);
// write (1, b, 13);

// return 0;
// }