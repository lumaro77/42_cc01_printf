/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:59:58 by lmartin2          #+#    #+#             */
/*   Updated: 2022/03/11 11:14:19 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The purpose of this function is to copy a block of memory from the source
// address to the destination address. It works by treating the memory as an
// array of bytes and copying each byte from source to destination.
void	*ft_memcpy(void *dst, const void *src, size_t n)
// The function ft_memcpy takes in a destination pointer dst, a source pointer
// src, and a size n specifying the number of bytes to be copied.
{
	unsigned char	*d;
	unsigned char	*s;
	// It first checks if both dst and src pointers are NULL. If they are,
	// it returns NULL without performing any operation.
	if (dst == NULL && src == NULL)
		return (NULL);
	// It then initializes two pointers: d as an unsigned char pointer 
	// pointing to dst, and s as an unsigned char pointer pointing to src.
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	// The function enters a loop that iterates n times, decrementing n on 
	// each iteration.
	while (n--)
		// Inside the loop, it copies the value of the byte pointed to by s to
		// the byte pointed to by d. After that, it increments both pointers d
		// and s to point to the next byte in their respective memory blocks.
		*d++ = *s++;
	// After copying the memory, it returns the original destination
	// pointer dst.
	return (dst);
}
