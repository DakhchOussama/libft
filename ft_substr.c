/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:07:35 by odakhch           #+#    #+#             */
/*   Updated: 2021/11/24 13:22:09 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*a;
	size_t	length;

	if (!s)
		return (NULL);
	length = ft_strlen(s);
	if (start >= length)
		return (ft_strdup(""));
	if (len + start > length)
		len = length - start;
	a = malloc(sizeof(char) * len + 1);
	if (a == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0' && i < len)
	{
		a[i] = s[start];
		i++;
		start++;
	}
	a[len] = '\0';
	return (a);
}
