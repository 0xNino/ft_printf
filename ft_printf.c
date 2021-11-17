/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 18:08:38 by 0xNino            #+#    #+#             */
/*   Updated: 2021/11/17 14:52:30 by 0xNino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_specifier(char c, va_list args, int count)
{
	if (c == 'c')
		count += ft_putchar_len(va_arg(args, char));
	if (c == 's')
		count += ft_putstr_len(va_arg(args, char *));
	if (c == 'p')
		count += ;
	if (c == 'd' || c == 'i')
		count += ft_putnbr_len(va_arg(args, int));
	if (c == 'u')
		count += ft_putnbr_len(va_arg(args, unsigned int));
	if (c == 'x')
		count += ft_puthex_len(va_arg(args, unsigned int), 'x');
	if (c == '%')
		count += ft_putchar_len('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	args;

	while (*format)
	{

	}
	return (count);
}
