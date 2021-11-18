/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:34:49 by 0xNino            #+#    #+#             */
/*   Updated: 2021/11/18 13:42:07 by 0xNino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"

int		ft_printf(const char *format, ...);
int		ft_putchar_len(int c);
int		ft_putstr_len(char *s);
int		ft_putnbr_len(int n);
int		ft_hexlen(unsigned long n);
int		ft_puthex_len(unsigned long n, int specifier);
char	ft_htoc(unsigned long n, char specifier);
char	*ft_itoh(char *hex, int len, unsigned long n, char specifier);

#endif
