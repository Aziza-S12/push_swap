/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_flag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:30:38 by asadritd          #+#    #+#             */
/*   Updated: 2022/12/08 15:30:43 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	len(long nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

void	sub_print_b(unsigned int nb)
{
	int	comper;
	int	fnumber;

	comper = 1000000000;
	while (nb / comper < 1)
	{
		comper = comper / 10;
	}
	while (comper >= 1)
	{
		fnumber = nb / comper + 48;
		ft_c_flag(fnumber);
		nb = nb - (nb / comper * comper);
		comper = comper / 10;
	}
}

int	ft_u_flag(unsigned int nb)
{
	int	a;

	a = len(nb);
	if (nb > 4294967295)
	{
		return (a);
	}
	if (nb == 0)
	{
		ft_c_flag('0');
		return (a);
	}
	else if (nb > 0)
	{
		sub_print_b(nb);
		return (a);
	}
	return (a);
}
