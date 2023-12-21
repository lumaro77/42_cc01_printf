/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:59:39 by lmartin2          #+#    #+#             */
/*   Updated: 2022/02/24 14:09:36 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// This code is an implementation of the ft_bzero function from the libft 
// library. It sets a block of memory to zero. this code provides a convenient
// way to set a block of memory to zero using the ft_memset function.
void	ft_bzero(void *s, size_t n)
// The function takes two parameters: s, which is a pointer to the memory block,
// and n, which is the number of bytes to set to zero.
{
	// The ft_memset function is used to set the memory block pointed to by s to
	// zero. It takes three parameters: the pointer to the memory block, the 
	// value to set (in this case, 0), and the number of bytes to set.
	// By calling ft_memset with the value 0, we effectively set all the bytes in
	// the memory block to zero.
	ft_memset(s, 0, n);
	// This function does not return a value; it simply modifies the memory block
	// pointed to by s
}
