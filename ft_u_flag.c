/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_flag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgonzale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 16:14:27 by bgonzale          #+#    #+#             */
/*   Updated: 2018/09/27 14:50:06 by bgonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_u_flag(va_list arg)
{
	unsigned long	i;
	int				str_len;

	str_len = 0;
	i = va_arg(arg, unsigned long);
	if (i == 4294967296 || i == 0)
	{
		ft_putchar('0');
		str_len += 1;
		return (str_len);
	}
	if ((int)i == -1)
	{
		ft_putstr("4294967295");
		str_len += 10;
		return (str_len);
	}
	str_len += ft_base(i, 10);
	return (str_len);
}
