/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:05:45 by odakhch           #+#    #+#             */
/*   Updated: 2021/11/24 12:03:13 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*tab;
	unsigned char	*tabs;

	tab = (unsigned char *)dst;
	tabs = (unsigned char *)src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (tabs < tab)
	{
		while (len > 0)
		{
			len--;
			tab[len] = tabs[len];
		}
		return (tab);
	}
	tab = ft_memcpy(dst, src, len);
	return (tab);
}
