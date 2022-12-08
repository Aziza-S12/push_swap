/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:29:38 by asadritd          #+#    #+#             */
/*   Updated: 2022/12/08 15:29:51 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formats(va_list args, const char format)
{
	int	print_length;

	print_length = 0;
	if (format == 'c')
		print_length += ft_c_flag(va_arg(args, int));
	else if (format == 's')
		print_length += ft_s_flag(va_arg(args, char *));
	else if (format == 'p')
		print_length += ft_p_flag(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		print_length += ft_di_flag(va_arg(args, int));
	else if (format == 'u')
		print_length += ft_u_flag(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
			print_length += ft_x_flag(va_arg(args, unsigned int), format);
	else if (format == '%')
		print_length += ft_printpercent();
	return (print_length);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		print_length;

	print_length = 0;
	i = 0;
	va_start (args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			print_length += ft_formats(args, s[i + 1]);
			i++;
		}
		else
			print_length += ft_c_flag(s[i]);
		i++;
	}
	va_end(args);
	return (print_length);
}

// int main (void)
// {
// 	char *qwe;
// 	int a = 48;
// 	qwe = "hgjgjjkl";
// 	a = ft_printf("%c", a);
// 	return a;
// }
