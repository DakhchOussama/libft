/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:38:45 by odakhch           #+#    #+#             */
/*   Updated: 2021/11/24 13:26:13 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	length1;
	size_t	length2;
	size_t	lenghtall;
	char	*a;

	if (!s1 || !s2)
		return (NULL);
	length1 = ft_strlen(s1);
	length2 = ft_strlen(s2);
	lenghtall = length1 + length2;
	a = (char *)malloc((lenghtall + 1) * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	ft_strlcpy (a, s1, length1 + 1);
	ft_strlcat (a, s2, lenghtall + 1);
	a[lenghtall] = '\0';
	return (a);
}
