/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_len.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:21:35 by 0xNino            #+#    #+#             */
/*   Updated: 2021/11/17 14:40:51 by 0xNino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

int	ft_puthex_len(unsigned long n, int specifier)
{
	int		len;
	char	*hex;

	len = ft_hexlen(n);
	hex = ft_calloc(len + 1, sizeof(char));
	if (!hex)
		return (NULL);
	if (n == 0)
		hex[len - 1] = '0';
	ft_itoh(hex, len, n, specifier);
	if (specifier == 'p')
	{
		if (hex[len - 1] == '0' && len - 1 == 0)
			ft_printf("%s", "0x0");
		else
			ft_printf("0x%s", hex);
	}
	else
		ft_printf("%s", hex);
	free(hex);
	return (len);
}
