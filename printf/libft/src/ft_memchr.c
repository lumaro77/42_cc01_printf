/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:02:27 by lmartin2          #+#    #+#             */
/*   Updated: 2022/03/11 11:04:22 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The ft_memchr function is implemented in the libft library. It searches for
//  a specific character in a block of memory. This implementation allows for
// searching for a specific character within a block of memory.
void	*ft_memchr(const void *s, int c, size_t n)
// The function takes three parameters: s, c, and n.
// The s parameter is a pointer to the memory block where the search will be
// performed.
// The c parameter is the character to be searched for.
// The n parameter is the number of bytes to search within the memory block.
{
	unsigned char	*str;
	// A pointer str is created and set to point to the memory block (s) 
	// casted as an unsigned char pointer.
	str = (unsigned char *)s;
	// A while loop is used to iterate through each byte of the memory block.
	// Inside the loop, each byte is compared with the character c. If a match
	//  is found, a pointer to that byte (str) is returned as a void pointer.
	while (n--)
		if (*str++ == (unsigned char)c)
			return ((void *)--str);
	// If no match is found after iterating through all the bytes (n-- 
	// decrements n and continues until it reaches 0), the function returns NULL
	// to indicate that the character was not found in the memory block.
	return (NULL);
}
