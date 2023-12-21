/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:03:33 by lmartin2          #+#    #+#             */
/*   Updated: 2022/03/11 12:45:23 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
// The ft_strncmp function takes three parameters: s1, s2, and n. It compares
// at most n characters of the strings s1 and s2 and returns an integer value 
// representing the comparison result.
{
	// The function first checks if n is zero. If it is, it means no characters
	//  should be compared, so it returns 0.
	if (!n)
		return (0);
	// Then, it enters a while loop that iterates through the strings s1 and 
	// s2 until a difference is found or n characters have been compared. Inside
	// the loop, it checks if the current characters of s1 and s2 are equal,
	// and also decrements n to keep track of the number of characters remaining 
	// to be compared. If a difference is found or n reaches zero, the loop is
	// exited.
	while (*s1 && *s1 == *s2 && --n)
	{
		++s1;
		++s2;
	}
	// After the loop, the function returns the difference between the 
	// current characters of s1 and s2. By casting them to unsigned char,
	// it ensures that the comparison is done in an unsigned context, avoiding
	// issues with negative ASCII values.
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}
