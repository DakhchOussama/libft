/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:15:19 by odakhch           #+#    #+#             */
/*   Updated: 2021/11/24 13:45:45 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	length;
	char	*a;

	if (!s || !f)
	{
		return (NULL);
	}
	length = ft_strlen(s);
	a = malloc((length + 1) * sizeof(char));
	if (!a)
	{
		return (NULL);
	}
	i = 0;
	while (i < length)
	{
		a[i] = f(i, s[i]);
		++i;
	}
	a[i] = '\0';
	return (a);
}
