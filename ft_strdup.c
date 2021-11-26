/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:09:19 by odakhch           #+#    #+#             */
/*   Updated: 2021/11/24 12:45:33 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*tab;
	size_t	i;
	size_t	length;

	length = ft_strlen(s1);
	tab = malloc(length + 1 * sizeof(char));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < length)
	{
		tab[i] = s1[i];
		++i;
	}
	tab[i] = '\0';
	return (tab);
}
