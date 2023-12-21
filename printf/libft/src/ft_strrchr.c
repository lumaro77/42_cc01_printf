/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:02:27 by lmartin2          #+#    #+#             */
/*   Updated: 2022/02/23 16:47:51 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
// The ft_strrchr function takes two parameters: s, which is a pointer to a
// string, and c, which is an integer representing a character. It searches 
// for the last occurrence of the character c in the string s and returns a 
// pointer to that occurrence or NULL if the character is not found.
{
	char *ptr;
	// The function first initializes a pointer ptr to NULL.
	ptr = NULL;
	// Then, it checks if the first character of s matches the given 
	// character c. If it does, it assigns ptr to point to that character.
	if (*s == (char)c)
		ptr = (char *)s;
	// Next, it iterates through the string s using a while loop until it 
	// reaches the end of the string. Inside the loop, it checks if each 
	// character matches the given character c.
	while (*(++s))
	{
		// If it does, it assigns ptr to point to that character.
		if (*s == (char)c)
			ptr = (char *)s;
	}
	// After the loop, if ptr is not NULL, it means a matching character was
	//  found in s, so it returns ptr.
	if (ptr)
		return (ptr);
	// If the given character c is the null terminator (0), it means we are
	// searching for the end of the string. In this case, it returns a pointer to the null terminator in s.    if ((char)c == 0)
	if ((char)c == 0)
		return ((char *)s);
	// If no matching character was found and c is not the null terminator, 
	// it means the character is not present in s, so it returns NULL.
	return (NULL);
	}
