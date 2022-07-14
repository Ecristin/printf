/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecristin <ecristin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 19:18:35 by ecristin          #+#    #+#             */
/*   Updated: 2022/07/14 20:02:20 by ecristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa(unsigned int n, char c)
{
	int	len;

	len = 0;
	if (n < 16)
	{
		if (n < 10)
			len += ft_putchar(n + '0');
		else
		{
			if (c == 'x')
				len += ft_putchar(n - 10 + 'a');
			else
				len += ft_putchar(n - 10 + 'A');
		}
		return (len);
	}
	else
	{
		len += ft_print_hexa(n / 16, c);
		len += ft_print_hexa(n % 16, c);
	}
	return (len);
}
