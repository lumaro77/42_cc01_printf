/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:40:50 by lmartin2          #+#    #+#             */
/*   Updated: 2022/02/25 17:47:43 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
// The ft_strtrim function takes two parameters: s1 and set. It trims leading
// and trailing characters from the input string s1 that are present in the 
// set of characters set. It returns a pointer to a newly allocated trimmed 
// string or NULL if an error occurs.
{
    char *p1;
    char *p2;
    // The function first checks if the input string s1 is NULL. If it is, 
	// it returns NULL.
    if (!s1)
        return (NULL);
    // Next, it sets p1 to the start of s1. It then iterates through s1 until
	// it reaches a character that is not present in the set. This trims any
	// leading characters that match the set.
    p1 = (char *)s1;
    // Trim leading characters from s1 that are present in the set
    while (*p1 && ft_strchr(set, *p1))
        p1++;
	// If p1 reaches the end of s1, it means all characters have been trimmed.
	// In this case, it returns a duplicate of an empty string.
    if (*p1 == '\0')
        return (ft_strdup(""));
    // Then, it sets p2 to the end of s1.
    p2 = (char *)s1 + ft_strlen(s1) - 1;
    // It then iterates backwards from p2 towards p1 until it reaches a 
	// character that is not present in the set. This trims any trailing 
	// characters that match the set.
    while (p2 > p1 && ft_strchr(set, *p2))
        p2--;
    // Finally, it calls ft_substr to extract a substring from s1 starting
	// from p1 and ending at p2. This substring represents the trimmed string, 
	// which is then returned.
    return (ft_substr(s1, (unsigned int)(p1 - s1), (size_t)(p2 - p1 + 1)));
}
