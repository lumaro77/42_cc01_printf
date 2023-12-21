/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:02:26 by lmartin2          #+#    #+#             */
/*   Updated: 2022/02/24 10:02:39 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The purpose of this function is to output a string followed by a newline 
// character to a specific file descriptor. It relies on other functions 
// ft_putstr_fd and ft_putchar_fd, which are assumed to be defined elsewhere 
// in the code.
void	ft_putendl_fd(char *s, int fd)
// The function ft_putendl_fd takes in a string s and an integer file
// descriptor fd.
{
	// It calls the function ft_putstr_fd to output the string s to the
	// specified file descriptor. This function is assumed to be defined
	// elsewhere in the code.
	ft_putstr_fd(s, fd);
	// After outputting the string, it calls the function ft_putchar_fd to
	// output a newline character '\n' to the specified file descriptor. This
	// function is also assumed to be defined elsewhere in the code.
	ft_putchar_fd('\n', fd);
}
