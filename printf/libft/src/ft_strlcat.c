/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:01:02 by lmartin2          #+#    #+#             */
/*   Updated: 2022/03/11 12:31:56 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
// The ft_strlcat function takes three parameters: dst, src, and size. It 
// appends the source string src to the end of the destination string dst, 
// ensuring that the resulting concatenated string is null-terminated and 
// fits within the given size. It returns the total length of the concatenated
// string.
{
	size_t	len_dst;
	size_t	len_src;
	// The function first calculates the length of the destination and the 
	// the length of the source string using ft_strlen.
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	// Next, it checks if the destination size is less than or equal to the 
	// length of the destination string. If it is, it means there is no room
	// to append any characters from the source string, so it returns the 
	// length of the source string plus the destination size.
	if (size <= len_dst)
		return (len_src + size);
	// If there is enough space in the destination, it calls ft_strlcpy to 
	// copy as much of the source string as possible to the end of the 
	// destination, taking into account the remaining space available.
	ft_strlcpy(dst + len_dst, src, size - len_dst);
	// Finally, it returns the combined length of the source and destination
	// strings.
	return (len_src + len_dst);
}
