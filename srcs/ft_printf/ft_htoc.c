/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htoc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:41:34 by 0xNino            #+#    #+#             */
/*   Updated: 2021/11/16 17:48:54 by 0xNino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_htoc(unsigned long n, char specifier)
{
	if (n < 10)
		return (n + 48);
	if (n >= 10)
	{
		if (specifier == 'p' || specifier == 'x')
			return (n + 87);
		else
			return (n + 55);
	}
	return (0);
}
