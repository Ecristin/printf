/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_di.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecristin <ecristin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 21:21:53 by marolive          #+#    #+#             */
/*   Updated: 2022/07/14 20:01:59 by ecristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_di(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len += ft_putchar('-');
		if (n == -2147483648)
		{
			len += ft_putchar('2');
			n = -147483648;
		}
		n = -n;
	}
	if (n < 10)
		len += ft_putchar(n + '0');
	else
	{
		len += ft_print_di(n / 10);
		len += ft_print_di(n % 10);
	}
	return (len);
}
