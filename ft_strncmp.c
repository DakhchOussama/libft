/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:45:39 by odakhch           #+#    #+#             */
/*   Updated: 2021/11/24 12:27:42 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*tabs1;
	unsigned char	*tabs2;

	i = 0;
	tabs1 = (unsigned char *)s1;
	tabs2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while ((tabs1[i] != '\0' || tabs2[i] != '\0') && i < n)
	{
		if (tabs1[i] != tabs2[i])
			return (tabs1[i] - tabs2[i]);
		++i;
	}
	return (0);
}
