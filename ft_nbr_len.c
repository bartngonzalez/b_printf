/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgonzale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 14:41:46 by bgonzale          #+#    #+#             */
/*   Updated: 2018/09/26 16:49:32 by bgonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nbr_len(unsigned long nbr, int base)
{
	unsigned long	i;
	int				base_nbr;

	i = 0;
	base_nbr = base;
	if (!nbr)
		return (1);
	while (nbr && ++i)
		nbr /= base_nbr;
	return (i);
}
