/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:57:52 by lmartin2          #+#    #+#             */
/*   Updated: 2022/02/23 14:45:18 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The ft_isascii function is implemented in the libft library. It checks
// whether a given character is an ASCII character. This implementation provides
//  a simple and efficient way to check if a character is an ASCII character.
// Please note that the ASCII character set consists of 128 characters, 
// numbered from 0 to 127. Characters with codes outside this range are not 
// considered ASCII characters.
int	ft_isascii(int c)
// The function takes an integer c as input, which represents the character to
// be checked. It checks if the value of c is between 0 and 127 (inclusive), 
// which are the valid ASCII character codes. If c is within this range, the 
// function returns true (non-zero), indicating that it is an ASCII character. 
// Otherwise, it returns false (zero).
{
	return (c >= 0 && c <= 127);
}
