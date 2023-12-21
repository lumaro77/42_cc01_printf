/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:01:39 by lmartin2          #+#    #+#             */
/*   Updated: 2022/02/24 10:01:50 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The purpose of this function is to output a string to a specific file 
// descriptor. It relies on another function ft_putchar_fd, which is assumed 
// to be defined elsewhere in the code.
void	ft_putstr_fd(char *s, int fd)
// The function ft_putstr_fd takes in a string s and an integer file
// descriptor fd.
{
	// It first checks if the string s is NULL. If it is, the function returns
	// without performing any operation.
	if (!s)
		return ;
	// It first checks if the string s is NULL. If it is, the function returns
	// without performing any operation.
	while (*s)
		// Inside the loop, it calls the ft_putchar_fd function to output the
		// current character to the specified file descriptor fd.
		ft_putchar_fd(*s++, fd);
	// After iterating through all characters in the string, the function
	// completes.
}
