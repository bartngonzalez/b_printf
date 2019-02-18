/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgonzale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 13:44:32 by bgonzale          #+#    #+#             */
/*   Updated: 2018/09/17 19:47:26 by bgonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t strlen;

	strlen = 0;
	while (str[strlen] != '\0')
		strlen++;
	return (strlen);
}
