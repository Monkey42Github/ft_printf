/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 16:35:45 by pschemit          #+#    #+#             */
/*   Updated: 2021/11/21 16:34:21 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_u(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb == 2147483647)
	{
		ft_putstr("2147483647");
		return (10);
	}
	if (nb > 9)
		i = ft_u((unsigned int)(nb / 10));
	nb = '0' + nb % 10;
	ft_putchar(nb);
	i++;
	return (i);
}

int	ft_putnbr(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		return (write (1, "-2147483648", 11));
	if (n < 0)
		return (write(1, "-", 1) + ft_u(-n));
	if (n >= 10)
		i = ft_putnbr (n / 10);
	ft_putchar((n % 10) + '0');
	i++;
	return (i);
}
