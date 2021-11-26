/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:22:17 by odakhch           #+#    #+#             */
/*   Updated: 2021/11/24 12:18:35 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	lens;
	size_t	lend;

	i = 0;
	lend = ft_strlen(dst);
	lens = ft_strlen(src);
	if (dstsize < lend)
		return (dstsize + lens);
	while (i + lend + 1 < dstsize && src[i] != '\0')
	{
		dst[lend + i] = src[i];
		i++;
	}
	dst[lend + i] = '\0';
	return (lend + lens);
}
