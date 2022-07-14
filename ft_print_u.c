/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecristin <ecristin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:55:10 by marolive          #+#    #+#             */
/*   Updated: 2022/07/14 20:02:32 by ecristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_u(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 10)
	{
		len += ft_print_u(n / 10);
		len += ft_print_u(n % 10);
	}
	else
		len += ft_putchar(48 + n);
	return (len);
}
