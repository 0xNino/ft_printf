/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_len.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:45:36 by 0xNino            #+#    #+#             */
/*   Updated: 2021/11/18 23:13:17 by 0xNino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putchar_len(int c)
{
	write(1, &c, 1);
	return (1);
}
/*
int	main(void)
{
	int	len;

	len = (int) ft_putchar_len('9');
	printf("%i", len);
}
*/