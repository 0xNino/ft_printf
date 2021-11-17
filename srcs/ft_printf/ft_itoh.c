/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoh.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:48:03 by 0xNino            #+#    #+#             */
/*   Updated: 2021/11/17 17:59:25 by 0xNino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

char	ft_itoh(char *hex, int len, unsigned long n, char specifier)
{
	unsigned long	reminder;

	reminder = 0;
	while (n)
	{
		reminder = n % 16;
		hex[len--] = ft_htoc(reminder, specifier);
		n /= 16;
	}
	return (hex);
}
