/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:48:02 by odakhch           #+#    #+#             */
/*   Updated: 2021/11/24 13:29:28 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char a, char const *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == a)
		{
			return (1);
		}
		++i;
	}
	return (0);
}

static int	this(char const *s1, char const *set)
{
	size_t	beggin;

	beggin = 0;
	while (s1[beggin] && check(s1[beggin], set))
	{
		beggin++;
	}
	return (beggin);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	beggin;
	size_t	end;
	char	*a;

	if (!s1 || !set)
		return (NULL);
	beggin = this(s1, set);
	end = ft_strlen(s1);
	while (end > beggin && check(s1[end - 1], set))
	{
		end--;
	}
	a = (char *)malloc((end - beggin + 1) * sizeof(*s1));
	if (a == 0)
		return (NULL);
	i = 0;
	while (beggin < end)
	{
		a[i] = s1[beggin];
		beggin++;
		i++;
	}
	a[i] = '\0';
	return (a);
}
