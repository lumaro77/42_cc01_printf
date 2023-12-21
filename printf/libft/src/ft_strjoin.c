/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:37:38 by lmartin2          #+#    #+#             */
/*   Updated: 2022/02/25 12:50:16 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
// The ft_strjoin function takes two parameters: s1 and s2, which are pointers
// to strings. It concatenates s2 to the end of s1 and returns a new string.
{
	char	*str;
	size_t	s1_len;
	size_t	s2_len;
	// The function first checks if either s1 or s2 is NULL. If either is NULL,
	// it means there is nothing to concatenate, so it returns NULL.
	if (!s1 || !s2)
		return (NULL);
	// Then, it calculates the lengths of s1 and s2 using ft_strlen.
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	// Next, it allocates memory for the new string str, taking into account
	// the lengths of s1 and s2, plus an additional byte for the ending null.
	str = (char *)ft_calloc(sizeof(char), (s1_len + s2_len + 1));
	// It checks if memory allocation fails. If it does, it returns NULL.
	if (!str)
		return (NULL);
	// The function then uses ft_memcpy to copy the contents of s1 to the
	// new string str.
	ft_memcpy((void *)str, (void *)s1, s1_len);
	// The function then uses ft_memcpy to copy the contents of s1 to the new
	// string str.
	ft_memcpy((void *)(str + s1_len), (void *)(s2), s2_len);
	 // Finally, it returns the new string str.
	return (str);
}
