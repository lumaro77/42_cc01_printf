/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:59:13 by lmartin2          #+#    #+#             */
/*   Updated: 2022/03/11 11:19:18 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The purpose of this function is to fill a block of memory with a specified 
// value. It works by treating the memory as an array of bytes and setting 
// each byte to the specified value.

void	*ft_memset(void *b, int c, size_t len)
// The function ft_memset takes in a pointer b to the memory block, an integer
// c representing the value to be set, and a size len specifying the number 
// of bytes to be filled.
{
	unsigned char	*ptr;
	unsigned char	value;
	// It initializes a pointer ptr to the same address as b, and an unsigned
	// character value with the same value as c.
	ptr = (unsigned char *)b;
	value = (unsigned char)c;
	// Then, it enters a loop that iterates len times, decrementing len on
	// each iteration.
	while (len--)
		// Inside the loop, it sets the value of the current byte pointed
		// to by ptr to the specified value by assigning *ptr with value. 
		// After that, it increments ptr to point to the next byte.
		*ptr++ = value;
	// After iterating through all bytes in the memory block, it returns
	// the original pointer b.
	return (b);
}
