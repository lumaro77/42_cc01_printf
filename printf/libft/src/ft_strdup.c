/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:05:52 by lmartin2          #+#    #+#             */
/*   Updated: 2022/02/25 18:44:33 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// This code defines a function ft_strdup that takes in a constant character
// pointer s1 and returns a newly allocated duplicate of the input string.
char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	len;
	// The function starts by calculating the length of the input string s1
	// using the ft_strlen function.
	len = ft_strlen(s1);
	// Memory is then allocated for the new string str using the ft_calloc
	// function. The allocated memory size is (len + 1) to include space for
	// the null-terminator.
	str = (char *)ft_calloc(sizeof(char), (len + 1));
	// Next, the code checks if memory allocation was successful. If not, it
	// returns NULL.
	if (!str)
		return (NULL);
	// The contents of s1 are then copied to str using the ft_memcpy function.
	ft_memcpy(str, s1, len);
	// Finally, the function returns the newly allocated and copied string str.
	return (str);
}
