/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x_flag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgonzale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 16:18:38 by bgonzale          #+#    #+#             */
/*   Updated: 2018/09/26 19:17:13 by bgonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_x_flag(va_list arg)
{
	unsigned int	i;
	int				str_len;

	str_len = 0;
	i = va_arg(arg, unsigned int);
	if (i == 0 || (long)i == 4294967296)
	{
		ft_putchar('0');
		str_len += 1;
		return (str_len);
	}
	str_len += ft_base(i, 16);
	return (str_len);
}
