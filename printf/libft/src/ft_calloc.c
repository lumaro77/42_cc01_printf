/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:05:32 by lmartin2          #+#    #+#             */
/*   Updated: 2022/03/11 10:54:39 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// This code is an implementation of the ft_calloc function from the libft 
// library. It allocates memory for an array of elements and initializes the 
// memory to zero. This implementation of ft_calloc is similar to the standard 
// library function calloc. It provides a convenient way to allocate and 
// initialize memory for an array in a single step. Please note that this code 
// assumes that the ft_bzero function is already implemented in the libft
// library.

void	*ft_calloc(size_t count, size_t size)
// The function takes two parameters: count, which is the number of elements to
//  allocate, and size, which is the size of each element.
{
	void	*res;
// The malloc function is used to allocate memory for the array. It calculates 
// the total number of bytes needed by multiplying count and size, and then 
// allocates that amount of memory.
	res = malloc(count * size);
	if (res == NULL)
		return (NULL);
// If the allocation is successful (i.e., malloc returns a non-null pointer), 
// the ft_bzero function is called to set the allocated memory to zero. This 
// ensures that all elements in the array are initialized to zero.
	ft_bzero(res, count * size);
// Finally, the function returns the pointer to the allocated and initialized 
// memory.
	return (res);
}
