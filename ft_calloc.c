/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:45:33 by odakhch           #+#    #+#             */
/*   Updated: 2021/11/24 12:45:04 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	*tab;
	size_t	len;

	len = count * size;
	tab = malloc(len);
	if (tab == NULL)
	{
		return (NULL);
	}
	ft_bzero (tab, len);
	return (tab);
}
