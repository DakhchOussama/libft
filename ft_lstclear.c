/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 20:45:37 by odakhch           #+#    #+#             */
/*   Updated: 2021/11/19 22:54:08 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tab;
	t_list	*list;

	if (lst)
	{
		list = *lst;
		while (list)
		{
			tab = list->next;
			ft_lstdelone(list, del);
			list = tab;
		}
		*lst = NULL;
	}
}
