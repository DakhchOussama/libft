/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 20:47:16 by odakhch           #+#    #+#             */
/*   Updated: 2021/11/25 20:05:45 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	a;

	a = (long int)n;
	if (a < 0)
	{
		ft_putchar_fd('-', fd);
		a = a * -1;
	}
	if (a >= 0 && a < 10)
	{
		ft_putchar_fd(a + '0', fd);
	}
	else if (a > 9)
	{
		ft_putnbr_fd(a / 10, fd);
		ft_putnbr_fd(a % 10, fd);
	}
}
