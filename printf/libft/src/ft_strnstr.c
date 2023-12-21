/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:04:49 by lmartin2          #+#    #+#             */
/*   Updated: 2022/03/11 12:57:11 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
// The ft_strnstr function takes three parameters: big, little, and len. It 
// searches for the first occurrence of the little string little within the 
// big string big, up to a maximum length of len. It returns a pointer to the
// first occurrence of little in big, or NULL if little is not found within 
// len characters.
{
	size_t	len_lit;
	size_t	i;
	// The function first checks if the little string is an empty string. If
	// it is, it means we are searching for an empty string within the big
	// string. In this case, it returns a pointer to the big string.
	if (!*little)
		return ((char *)big);
	// Next, it calculates the length of the little string.
	len_lit = ft_strlen(little);
	// Then, it initializes an index variable i to -1.
	i = -1;
	// The function then enters a while loop that iterates through the big
	// string until it reaches the end or until len characters have been
	// processed.
	while (++i < len && big[i])
		// Inside the loop, it checks if there are enough characters remaining
		// in the big string to compare with the little string, and also checks
		// if the substring of the big string starting from the current index
		//  matches the little string using ft_strncmp
		if (len - i >= len_lit && !ft_strncmp(&big[i], little, len_lit))
			// If a match is found, it returns a pointer to the matching
			// substring.
			return ((char *)&big[i]);
	// If no matching substring is found within the given length, it means 
	// little is not present in big within len characters. In this case, it
	// returns NULL.
	return (NULL);
}
