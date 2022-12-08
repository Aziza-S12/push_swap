/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_flag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:30:19 by asadritd          #+#    #+#             */
/*   Updated: 2022/12/08 15:30:22 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_s_flag(char *s)
{
	int	a;

	a = ft_strlen(s);
	if (s == NULL)
	{
		write (1, "(null)", 6);
		return (6);
	}
	write (1, s, a);
	return (a);
}
