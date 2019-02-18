# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgonzale <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/26 14:21:09 by bgonzale          #+#    #+#              #
#    Updated: 2018/09/26 16:47:48 by bgonzale         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -c

HEADER = libft.h

CFILES = b_printf.c \
		 ft_putchar.c \
		 ft_putstr.c \
		 ft_strlen.c \
		 ft_nbr_len.c \
		 ft_base.c \
		 ft_flags.c \
		 ft_c_flag.c \
		 ft_s_flag.c \
		 ft_d_i_flag.c \
		 ft_o_flag.c \
		 ft_u_flag.c \
		 ft_x_flag.c \
		 ft_p_flag.c \

OBJS = $(CFILES:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -I.$(HEADER) $(CFILES)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
