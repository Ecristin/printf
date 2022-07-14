/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecristin <ecristin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 19:56:24 by ecristin          #+#    #+#             */
/*   Updated: 2022/07/14 20:02:43 by ecristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *st, ...);
int	ft_print_di(int n);
int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_print_p(unsigned long n, char c);
int	ft_print_hexa(unsigned int n, char c);
int	ft_print_u(unsigned int n);

#endif
