/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_flag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgonzale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 16:23:05 by bgonzale          #+#    #+#             */
/*   Updated: 2018/09/26 16:26:08 by bgonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_p_flag(va_list arg)
{
	unsigned long	i;
	int				str_len;

	str_len = 0;
	i = va_arg(arg, unsigned long);
	ft_putstr("0x");
	str_len += 2;
	str_len += ft_base(i, 16);
	return (str_len);
}
