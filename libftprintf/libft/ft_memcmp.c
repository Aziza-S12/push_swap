/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:24:12 by asadritd          #+#    #+#             */
/*   Updated: 2022/12/08 15:24:34 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*str3;
	unsigned char	*str4;

	str3 = (unsigned char *)str1;
	str4 = (unsigned char *)str2;
	while (n > 0)
	{
		if (*str3 != *str4)
		{
			return (*str3 - *str4);
		}
		n --;
		str3++;
		str4++;
	}
	return (0);
}

// int		main(int argc, const char *argv[])
// {
// 	int		arg;

// 	alarm(5);
// 	if (argc == 1)
// 		return (0);
// 	else if ((arg = atoi(argv[1])) == 1)
// 		ft_print_result(ft_memcmp("salut", "salut", 5));
// 	else if (arg == 2)
// 		ft_print_result(ft_memcmp("t\200", "t\0", 2));
// 	else if (arg == 3)
// 		ft_print_result(ft_memcmp("testss", "test", 5));
// 	else if (arg == 4)
// 		ft_print_result(ft_memcmp("test", "tEst", 4));
// 	else if (arg == 5)
// 		ft_print_result(ft_memcmp("", "test", 4));
// 	else if (arg == 6)
// 		ft_print_result(ft_memcmp("test", "", 4));
// 	else if (arg == 7)
// 		ft_print_result(ft_memcmp("abcdefghij", "abcdefgxyz", 7));
// 	else if (arg == 8)
// 		ft_print_result(ft_memcmp("abcdefgh", "abcdwxyz", 6));
// 	else if (arg == 9)
// 		ft_print_result(ft_memcmp("zyxbcdefgh", "abcdefgxyz", 0));
// 	return (0);
// }
