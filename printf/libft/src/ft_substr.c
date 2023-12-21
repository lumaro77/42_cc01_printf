/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 20:59:15 by lmartin2          #+#    #+#             */
/*   Updated: 2022/03/11 13:09:41 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function to extract a substring from a given string
char	*ft_substr(char const *s, unsigned int start, size_t len)
// The ft_substr function takes three parameters: s, start, and len. It returns
// a pointer to a newly allocated substring or NULL if an error occurs.
{
    char *str;
    // Check if the input string is NULL, return NULL if true
    if (!s)
        return (NULL);
    // Check if the start index is greater than or equal to the length of the 
	// input string. If true, return an empty string (a duplicate of an empty 
	// string)
    if (start >= ft_strlen(s))
        return (ft_strdup(""));
    // Check if the length is greater than the remaining length of the string
	// from the start index. If true, return a substring starting from the 
	// start index till the end of the string
    if (len > ft_strlen(s + start))
        return (ft_strdup(s + start));
    // Allocate memory for the substring (plus one additional byte for the 
	// null-terminator)
    str = (char *)ft_calloc(sizeof(char), len + 1);
    if (!str)
        return (NULL);
    // Copy the substring from the input string to the newly allocated memory
    str = (char *)ft_memcpy((void *)str, (void *)(s + start), len);
    // Finally, it returns the extracted substring.
    return (str);
}
