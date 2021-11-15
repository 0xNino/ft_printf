/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 18:08:38 by 0xNino            #+#    #+#             */
/*   Updated: 2021/11/15 21:52:38 by 0xNino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ft_printf.h"

static int	ft_specifier(char c, va_list args, int count)
{
	if (c == 'c')
		count += ft_putchar(va_arg(args, char));
	if (c == 's')
		count += ft_putstr(va_arg(args, char *));
	if (c == 'p')
	{
		
	}
	if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(args, int));
	if (c == 'u')
		count += ft_putnbr(va_arg(args, unsigned int));
	if (c == 'x')
	{

	}
	if (c == '%')
		count += ft_putchar('%');
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
