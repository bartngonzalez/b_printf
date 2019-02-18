/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgonzale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 14:28:48 by bgonzale          #+#    #+#             */
/*   Updated: 2018/09/26 16:51:07 by bgonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>

void	ft_putchar(char c);

void	ft_putstr(char const *s);

size_t	ft_strlen(const char *str);

int		ft_nbr_len(unsigned long nbr, int base);

int		ft_base(unsigned long nbr, int base);

int		ft_flags(char *str, va_list arg);

int		b_printf(const char *restrict format, ...);

int		ft_c_flag(va_list arg);

int		ft_s_flag(va_list arg);

int		ft_d_i_flag(va_list arg);

int		ft_o_flag(va_list arg);

int		ft_u_flag(va_list arg);

int		ft_x_flag(va_list arg);

int		ft_p_flag(va_list arg);

#endif
