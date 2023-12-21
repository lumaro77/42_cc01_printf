/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:02:27 by lmartin2          #+#    #+#             */
/*   Updated: 2022/03/08 16:50:05 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// This code defines a function ft_strchr that takes in a constant character
// pointer s and an integer c, and returns a pointer to the first occurrence
// of the character c in the string s, or a pointer to the null-terminator if
// c is not found.
char	*ft_strchr(const char *s, int c)
{
	// The function uses a while loop to iterate through each character of
	// the string s.
	while (*s)
	{
		// Inside the loop, it checks if the current character matches the
		// given character c. If there is a match, it returns a pointer to
		// that character.
		if (*s == (unsigned char)c)
			return ((char *)s);
		++s;
	}
	// If the loop completes without finding a match, it checks if the given
	// character c is the null-terminator '\0'. If it is, it means that c was
	// not found in s, and it returns a pointer to the null-terminator at the
	// end of s.
	if ((unsigned char)c == '\0')
		return ((char *)s);
	// If neither a match nor a null-terminator is found, it means that c 
	// was not found in s, and it returns NULL.
	return (NULL);
}
