/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:22:09 by pschemit          #+#    #+#             */
/*   Updated: 2021/11/21 16:23:41 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		str_len(char *str);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_p_hexa(unsigned long long c);
int		ft_m_hexa(unsigned long long c);
int		ft_putnbr(int n);
int		ft_printf(const char *cspduix, ...);
int		verif(char s, va_list parameters);
int		ft_u(unsigned int nb);

#endif
