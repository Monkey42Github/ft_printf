/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:03:00 by pschemit          #+#    #+#             */
/*   Updated: 2021/11/21 14:43:26 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_p_hexa(unsigned long long c)
{
	int		len;

	len = 0;
	if (c >= 16)
		len = ft_p_hexa(c / 16);
	return (len + ft_putchar("0123456789abcdef"[c % 16]));
}

int	ft_m_hexa(unsigned long long c)
{
	int		len;

	len = 0;
	if (c >= 16)
		len = ft_m_hexa(c / 16);
	return (len + ft_putchar("0123456789ABCDEF"[c % 16]));
}
