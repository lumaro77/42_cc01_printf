/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:00:19 by lmartin2          #+#    #+#             */
/*   Updated: 2022/03/11 11:18:32 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The purpose of this function is to copy a block of memory from a source
// address to a destination address, handling overlapping memory regions
// correctly. It uses pointer arithmetic to iterate through the memory block
// and copy each byte.
void	*ft_memmove(void *dst, const void *src, size_t len)
// The function ft_memmove takes in a destination pointer dst, a source 
// pointer src, and a size len specifying the number of bytes to be copied.
{
	unsigned char		*ptr_dst;
	const unsigned char	*ptr_src;
	// It first checks if both dst and src pointers are NULL. If they are, it 
	// returns dst without performing any operation.
	if (!dst && !src)
		return (dst);
	// It then initializes two pointers: ptr_dst as an unsigned char pointer
	// pointing to dst, and ptr_src as a const unsigned char pointer pointing
	// to src.
	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	// The function checks if the source address (ptr_src) is before the
	// destination address (ptr_dst) in memory.
	if (ptr_src < ptr_dst)
	{
		// If it is, it adjusts both pointers to point to the last byte of
		// the memory block, and then copies the memory from the end of the 
		// block to the beginning. This handles the case where the source and
		// destination memory regions overlap.
		ptr_dst += len - 1;
		ptr_src += len - 1;
		while (len--)
			*ptr_dst-- = *ptr_src--;
	}
	else
		// If it is not, it simply copies the memory from the beginning of 
		// the block to the end.
		while (len--)
			*ptr_dst++ = *ptr_src++;
	// After copying the memory, it returns the original destination
	// pointer dst.
	return (dst);
}
