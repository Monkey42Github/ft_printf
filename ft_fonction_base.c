/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fonction_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 18:33:02 by pschemit          #+#    #+#             */
/*   Updated: 2021/11/21 16:01:08 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (ft_putstr("(null)"));
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}
