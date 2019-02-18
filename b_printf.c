/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_printf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgonzale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 16:33:05 by bgonzale          #+#    #+#             */
/*   Updated: 2018/09/26 16:42:22 by bgonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		b_printf(const char *restrict format, ...)
{
	va_list arg;
	int		str_len;

	str_len = 0;
	va_start(arg, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c' || *format == 's' || *format == 'd'
					|| *format == 'i' || *format == 'o' || *format == 'u'
					|| *format == 'x' || *format == 'p' || *format == '%')
				str_len += ft_flags((char *)format++, arg);
		}
		else
		{
			ft_putchar(*format);
			str_len += 1;
			format++;
		}
	}
	va_end(arg);
	return (str_len);
}
