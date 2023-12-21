/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:03:23 by lmartin2          #+#    #+#             */
/*   Updated: 2022/04/04 13:03:41 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// The code defines the function ft_putnbr_fd, which outputs an integer to 
// a specified file descriptor.

static void	dec_printer(unsigned int n, int fd)
// The helper function dec_printer is a recursive function that outputs each
// digit of the number from right to left.
{
	// If the number is greater than 9, it recursively calls itself with the
	// number divided by 10.
	if (n > 9)
		dec_printer(n / 10, fd);
	// After the recursive call, it outputs the rightmost digit of the number
	// to the specified file descriptor using ft_putchar_fd.
	ft_putchar_fd(n % 10 + '0', fd);
}

// The purpose of this code is to output an integer to a specific file
// descriptor. It relies on another function ft_putchar_fd, which is
// assumed to be defined elsewhere in the code.
void	ft_putnbr_fd(int n, int fd)
// The function ft_putnbr_fd takes in an integer n and an integer file
// descriptor fd.
{
	// It first checks if n is negative. If it is, it outputs the negative
	// sign '-' to the specified file descriptor using ft_putchar_fd.
	if (n < 0)
		ft_putchar_fd('-', fd);
	// Then, it calls the helper function dec_printer with the absolute
	// value of n (converted to an unsigned integer) minus twice its value
	// if n is negative.
	dec_printer((unsigned int)n - 2 * (n < 0) * (unsigned int)n, fd);
}
