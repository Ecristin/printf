/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecristin <ecristin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 19:41:13 by ecristin          #+#    #+#             */
/*   Updated: 2022/07/14 20:02:36 by ecristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_arg(char c, va_list ar)
{
	if (c == 'c')
		return (ft_putchar(va_arg(ar, int)));
	if (c == 's')
		return (ft_putstr(va_arg(ar, char *)));
	if (c == 'd' || c == 'i')
		return (ft_print_di(va_arg(ar, int)));
	if (c == 'u')
		return (ft_print_u(va_arg(ar, unsigned int)));
	if (c == 'x' || c == 'X')
	{
		if (c == 'X')
			return (ft_print_hexa(va_arg(ar, unsigned int), c));
		else
			return (ft_print_hexa(va_arg(ar, unsigned int), c));
	}
	if (c == 'p')
		return (ft_putstr("0x") + ft_print_p(va_arg(ar, unsigned long), c));
	if (c == '%')
		return (ft_putchar(c));
	else
		return (0);
}

int	ft_printf(const char *st, ...)
{
	va_list	ar;
	int		i;
	int		j;

	va_start (ar, st);
	i = 0;
	j = 0;
	while (st[i])
	{
		if (st[i] == '%')
		{
			j += ft_printf_arg(st[i + 1], ar);
			i++;
		}
		else
			j += ft_putchar(st[i]);
		i++;
	}
	va_end(ar);
	return (j);
}
