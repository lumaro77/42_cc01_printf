/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 17:34:59 by lmartin2          #+#    #+#             */
/*   Updated: 2022/03/08 13:41:24 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

# define NEG            '-'
# define BASE_DEC       "0123456789"
# define HEX            "0x"
# define BASE_HEX_LOW   "0123456789abcdef"
# define BASE_HEX_UP    "0123456789ABCDEF"

int	ft_printf(const char *str, ...);
int	parser(char *ptr, va_list listi, int *error);
int	c_printer(char c, int *err);
int	s_printer(char *s, int *err);
int	base_writer(unsigned long long nbr, int num, char *base, int *err);
int	p_printer(unsigned long long p, int *err);
int	i_printer(int i, int *err);
int	u_printer(unsigned int u, int *err);
int	x_low_printer(unsigned int x_low, int *err);
int	x_up_printer(unsigned int x_up, int *err);

#endif