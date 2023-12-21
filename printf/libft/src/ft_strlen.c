/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:58:54 by lmartin2          #+#    #+#             */
/*   Updated: 2022/03/08 22:48:42 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
// The ft_strlen function takes a pointer to a string s and returns the length
// of the string.
{
	char	*ptr;
	// The function first assigns a new pointer ptr to the same memory address
	// as s.
	ptr = (char *)s;
	// Then, it enters a while loop that iterates through the string until it
	// reaches the null terminator. Inside the loop, it increments the pointer
	// ptr to move to the next character.
	while (*ptr)
		ptr++;
	// After the loop, it returns the difference between the current position
	// of ptr and the initial position of s. This represents the length of the 
	// string.
	return ((size_t)(ptr - s));
}
