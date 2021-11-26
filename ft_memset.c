/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:13:54 by odakhch           #+#    #+#             */
/*   Updated: 2021/11/24 11:47:03 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*tab;

	tab = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		tab[i] = (unsigned char )c;
		++i;
	}
	return (str);
}
