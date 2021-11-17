/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:04:37 by 0xNino            #+#    #+#             */
/*   Updated: 2021/11/05 18:41:10 by 0xNino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elst;

	elst = (t_list *) malloc(sizeof(*elst));
	if (!elst)
		return (NULL);
	elst->content = content;
	elst->next = NULL;
	return (elst);
}
