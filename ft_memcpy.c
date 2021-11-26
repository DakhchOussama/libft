/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:20:43 by odakhch           #+#    #+#             */
/*   Updated: 2021/11/24 12:09:04 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*sr;
	unsigned char	*ds;
	size_t			i;

	sr = (unsigned char *)src;
	ds = (unsigned char *)dst;
	if (sr == NULL && ds == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < n)
	{
		ds[i] = sr[i];
		i++;
	}
	return (dst);
}
