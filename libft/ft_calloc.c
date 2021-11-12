/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngenoud <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 16:02:54 by ngenoud           #+#    #+#             */
/*   Updated: 2021/10/29 16:02:55 by ngenoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	bytes;
	size_t	i;

	bytes = count * size;
	ptr = malloc(bytes);
	if (!ptr)
		return (NULL);
	i = 0;
	while (bytes--)
		ptr[i++] = 0;
	return ((void *)ptr);
}
