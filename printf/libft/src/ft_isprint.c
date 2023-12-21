/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:58:35 by lmartin2          #+#    #+#             */
/*   Updated: 2022/02/23 14:46:32 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The ft_isprint function is implemented in the libft library. It checks 
// whether a given character is a printable character. This implementation 
// provides a simple and efficient way to check if a character is a printable
// character using ASCII values. Please note that this implementation assumes 
// that the character encoding being used is ASCII. If you are using a different
// character encoding, the range for printable characters may vary.
int	ft_isprint(int c)
// The function takes an integer c as input, which represents the character 
// to be checked.
{
	// It checks if the value of c is between the ASCII codes of ' ' (space) 
	// and '~' (tilde), which correspond to the printable characters in the 
	// ASCII table. If c is within this range, the function returns true 
	// (non-zero), indicating that it is a printable character. Otherwise, it 
	// returns false (zero).
	return (c >= ' ' && c <= '~');
}
