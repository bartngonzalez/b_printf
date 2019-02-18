/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_flag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgonzale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 16:02:34 by bgonzale          #+#    #+#             */
/*   Updated: 2018/09/26 19:30:13 by bgonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_s_flag(va_list arg)
{
	char	*str;
	int		str_len;

	str_len = 0;
	str = va_arg(arg, char *);
	if (str == NULL)
	{
		ft_putstr("(null)");
		str_len += 6;
		return (str_len);
	}
	ft_putstr(str);
	str_len += ft_strlen(str);
	return (str_len);
}
