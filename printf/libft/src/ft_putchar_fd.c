/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:00:36 by lmartin2          #+#    #+#             */
/*   Updated: 2022/02/24 10:00:43 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The purpose of this function is to write a single character to a specific
// file descriptor using the write function.
void	ft_putchar_fd(char c, int fd)
// The function ft_putchar_fd takes in a character c and an integer file 
// descriptor fd. It uses the write function to write the character c to the 
// specified file descriptor.
{
	size_t num;
	// The write function takes the file descriptor (fd), a pointer to the
	// data to be written (&c), and the size of the data (sizeof(c)). By
	// passing &c, which is the address of the character c, we ensure that 
	// only a single character is written to the file descriptor.
	num = write(fd, &c, sizeof(c));
	(void)num;
}
