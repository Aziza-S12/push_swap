/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_di_flag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:29:26 by asadritd          #+#    #+#             */
/*   Updated: 2022/12/08 15:29:28 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len(long nb)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	if (nb == 0)
	{
		return (1);
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

void	sub_print_a(int nb)
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

int	checks(int nb)
{
	int	a;

	a = ft_len(nb);
	if (nb > 2147483647 || nb < -2147483648)
	{
		return (a);
	}
	if (nb == 0)
	{
		ft_c_flag('0');
		return (a);
	}
	return (0);
}

int	ft_di_flag(int nb)
{
	int	a;

	a = ft_len(nb);
	checks(nb);
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (a);
	}
	else if (nb > 0)
	{
		sub_print_a(nb);
		return (a);
	}
	else if (nb < 0)
	{
		ft_c_flag('-');
		nb = nb * (-1);
		sub_print_a(nb);
	}
	return (a);
}
