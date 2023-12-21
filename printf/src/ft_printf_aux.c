/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_aux.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:37:32 by lmartin2          #+#    #+#             */
/*   Updated: 2022/03/08 13:38:28 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	p_printer(unsigned long long p, int *err)
// Function to print a pointer address in hexadecimal format
{
	// Call base_writer to print the hexadecimal representation of the
	// pointer address
	return (base_writer(p, s_printer(HEX, err), BASE_HEX_LOW, err));
}

int	i_printer(int i, int *err)
// Function to print a integer in decimal format
{
	unsigned long long	nbr;
	// Convert negative integer to unsigned long long
	nbr = (unsigned long long)((long)i - (i < 0) * 2 * (long)i);
	// Print the decimal representation of the integer
	return (base_writer(nbr, (i < 0 && c_printer(NEG, err)), BASE_DEC, err));
}

int	u_printer(unsigned int u, int *err)
// Function to print a unsigned integer in decimal format
{
	// Print the unsigned decimal representation of the integer
	return (base_writer((unsigned long long)u, 0, BASE_DEC, err));
}

int	x_low_printer(unsigned int x_low, int *err)
// Function to print a unsigned integer in lower case hexadecimal format
{
	// Print the lowercase hexadecimal representation of the integer
	return (base_writer((unsigned long long)x_low, 0, BASE_HEX_LOW, err));
}

int	x_up_printer(unsigned int x_up, int *err)
// Function to print a unsigned integer in upper case hexadecimal format
{
	// Print the uppercase hexadecimal representation of the integer
	return (base_writer((unsigned long long)x_up, 0, BASE_HEX_UP, err));
}
