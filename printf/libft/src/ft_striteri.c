/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 09:58:15 by lmartin2          #+#    #+#             */
/*   Updated: 2022/02/25 12:55:12 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// This code defines a function ft_striteri that takes in a string s and a
// function pointer f. The purpose of this function is to iterate over each
// character of the string s and apply the function f to each character along 
// with its corresponding index.
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	// The function starts by checking if either s or f is NULL. If either of
	// them is NULL, the function returns without performing any operations.
	if (!s || !f)
		return ;
	// Next, an unsigned integer variable i is declared and initialized to -1.
	i = -1;
	// The while loop is used to iterate over each character of the string s.
	// The loop condition s[++i] checks if the character at index i+1 is not
	// null-terminating, effectively iterating over each character of the string.
	while (s[++i])
		// Inside the loop, the function pointer f is called with two arguments:
		// the index i and the address of the current character in 
		// s ((char *)&s[i]). This allows the function f to operate on each
		// character of the string.
		f(i, (char *)&s[i]);
// After the loop completes, the function finishes its execution.
}
