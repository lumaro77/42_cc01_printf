/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:02:27 by lmartin2          #+#    #+#             */
/*   Updated: 2022/03/11 11:13:14 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The purpose of this function is to compare two blocks of memory byte by 
// byte and determine their relative order. It returns a negative value if the
// first differing byte in s1 is less than the corresponding byte in s2, a 
// positive value if it is greater, and 0 if all bytes are equal.
int	ft_memcmp(const void *s1, const void *s2, size_t n)
// The function ft_memcmp takes in two pointers s1 and s2 to the memory blocks
// being compared, and a size n specifying the number of bytes to be compared.
{
	unsigned char	*p1;
	unsigned char	*p2;
	// It first checks if n is 0. If it is, it returns 0 since there are no 
	// bytes to compare.
	if (n == 0)
		return (0);
	// It then initializes two pointers: p1 as an unsigned char pointer
	// pointing to s1, and p2 as an unsigned char pointer pointing to s2.
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	// The function enters a loop that iterates until either a difference
	// is found or n reaches 0. It compares the value of the byte pointed
	// to by p1 with the value of the byte pointed to by p2. If they are 
	// equal, it increments both pointers p1 and p2 to point to the next 
	// byte in their respective memory blocks.
	while (--n && *p1 == *p2)
	{
		p1++;
		p2++;
	}
	// After the loop, it returns the difference between the last compared
	// bytes by casting it to an integer.
	return ((int)(*p1 - *p2));
}
