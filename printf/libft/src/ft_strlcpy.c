/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:00:47 by lmartin2          #+#    #+#             */
/*   Updated: 2022/03/11 12:41:45 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
// The ft_strlcpy function takes three parameters: dst, src, and size. It
// copies at most size - 1 characters from the source string src to the
// destination string dst, ensuring that the destination string is 
// null-terminated. It returns the length of the source string.
{
	size_t	srcsize;
	// The function first calculates the length of the source string using
	// ft_strlen.
	srcsize = ft_strlen(src);
	// Then, it checks if the destination size is 0. If it is, it means there
	// is no room for any characters in the destination string, so it returns
	// the length of the source string.
	if (size == 0)
		return (srcsize);
	// Next, it checks if the source string length plus 1 is less than or 
	// equal to the destination size. 
	if (srcsize + 1 <= size)
	{
		// If it is, it means there is enough room in the destination string
		// to copy the entire source string. In this case, it uses ft_memcpy 
		// to copy the source string to the destination string and adds a null
		// terminator at the end.
		ft_memcpy((void *)dst, (void *)src, srcsize);
		*(dst + srcsize) = '\0';
	}
	else
	{
		// If the source string length plus 1 is greater than the destination
		// size, it means there is not enough room in the destination string to
		// copy the entire source string. In this case, it uses ft_memcpy to 
		// copy only size - 1 characters from the source string to the
		// destination string and adds a null terminator at the end.
		ft_memcpy((void *)dst, (void *)src, size - 1);
		*(dst + size - 1) = '\0';
	}
	// Finally, it returns the length of the source string.
	return (srcsize);
}
