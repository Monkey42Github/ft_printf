/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 14:52:28 by pschemit          #+#    #+#             */
/*   Updated: 2021/11/21 16:25:11 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	verif(char s, va_list parameters)
{
	if (s == 'c')
		return (ft_putchar(va_arg(parameters, int)));
	if (s == 's')
		return (ft_putstr(va_arg(parameters, char *)));
	if (s == 'p')
		return (write(1, "0x", 2)
			+ ft_p_hexa(va_arg(parameters, unsigned long long)));
	if (s == 'd' || s == 'i')
		return (ft_putnbr(va_arg(parameters, int)));
	if (s == 'u')
		return (ft_u(va_arg(parameters, unsigned int)));
	if (s == 'x')
		return (ft_p_hexa(va_arg(parameters, unsigned int)));
	if (s == 'X')
		return (ft_m_hexa(va_arg(parameters, unsigned int)));
	if (s == '%')
		return (write(1, "%", 1));
	return (0);
}

int	ft_printf(const char *cspduix, ...)
{
	int		i;
	int		count;
	va_list	parameters;

	va_start (parameters, cspduix);
	count = 0;
	i = 0;
	while (cspduix[i])
	{
		if (cspduix[i] == '%')
		{
			i++;
			if (cspduix[i] == '\0')
				break ;
			count += verif(cspduix[i], parameters);
		}
		else
		{
			ft_putchar(cspduix[i]);
			count++;
		}
		i++;
	}
	va_end(parameters);
	return (count);
}
