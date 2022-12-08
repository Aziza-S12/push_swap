/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:20:42 by asadritd          #+#    #+#             */
/*   Updated: 2022/12/08 15:20:48 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int		ft_c_flag(char c);
size_t	ft_strlen(char *s);
int		ft_di_flag(int nb);
int		ft_s_flag(char *s);
int		ft_u_flag(unsigned int nb);
void	ft_putchar_fd(char c, int fd);
int		ft_x_flag(unsigned int num, const char format);
int		ft_p_flag(unsigned long int ptr);
int		ft_printpercent(void);
int		ft_printf(const char *s, ...);
int		ft_len(long nb);
void	sub_print_a(int nb);
void	ft_put_ptr(unsigned long int num);
int		len_p(unsigned long int a);
void	sub_print_b(unsigned int nb);
int		len(long nb);
int		ft_hex_len(unsigned	int num);
void	ft_put_x(unsigned int num, const char format);
int		checks(int nb);

#endif