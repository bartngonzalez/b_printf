/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_i_flag.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgonzale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 16:07:11 by bgonzale          #+#    #+#             */
/*   Updated: 2018/09/27 14:42:32 by bgonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_d_i_flag(va_list arg)
{
	int		i;
	int		str_len;

	str_len = 0;
	i = va_arg(arg, int);
	if ((long)i == 2147483648 || (long)i == -2147483648)
	{
		ft_putstr("-2147483648");
		str_len += 11;
		return (str_len);
	}
	if (i < 0)
	{
		i = i * -1;
		ft_putchar('-');
		str_len += 1;
	}
	str_len += ft_base(i, 10);
	return (str_len);
}
