/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_o_flag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgonzale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 16:11:21 by bgonzale          #+#    #+#             */
/*   Updated: 2018/09/26 16:13:14 by bgonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_o_flag(va_list arg)
{
	unsigned int	i;
	int				str_len;

	str_len = 0;
	i = va_arg(arg, unsigned int);
	str_len += ft_base(i, 8);
	return (str_len);
}
