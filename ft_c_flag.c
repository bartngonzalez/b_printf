/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c_flag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgonzale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 15:59:06 by bgonzale          #+#    #+#             */
/*   Updated: 2018/09/26 16:28:41 by bgonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_c_flag(va_list arg)
{
	int i;
	int str_len;

	str_len = 0;
	i = va_arg(arg, int);
	ft_putchar(i);
	str_len += 1;
	return (str_len);
}
