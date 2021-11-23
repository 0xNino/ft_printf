/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 22:43:33 by 0xNino            #+#    #+#             */
/*   Updated: 2021/11/23 15:56:04 by 0xNino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	main(void)
{
	char	*str;
	int		nbr;

	str = NULL;
	nbr = 42;
	str = strdup("This is a string");
	printf("%i\n", ft_printf("Test\n"));
	printf("%i\n", ft_printf("Print a char : %c\n", 'a'));
	printf("%i\n", ft_printf("Print a string : %s\n", str));
	printf("%i\n", ft_printf(" %c \n", '0'));
	printf("%i\n", ft_printf(" %c\n", '0' - 256));
	printf("%i\n", ft_printf(" %c %c %c ", '0', 0, '1'));
	printf("%i\n", ft_printf(" %c %c %c ", '1', '2', '3'));
	printf("%i\n", ft_printf(" %c %c %c ", '2', '1', 0));
	ft_printf("ft : %x \n", -1);
	printf("lib : %x \n", -1);
	ft_printf("ft : %x \n", 0);
	printf("lib : %x \n", -0);
	ft_printf("ft : %x \n", 16);
	printf("lib : %x \n", 16);
}
