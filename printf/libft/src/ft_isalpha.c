/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:56:14 by lmartin2          #+#    #+#             */
/*   Updated: 2022/02/23 14:38:35 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// The ft_isalpha function is implemented in the libft library. It checks
// whether a given character is an alphabetic character (i.e., a letter).This
// implementation provides a simple and efficient way to check if a character
// is an alphabetic character using ASCII values. Please note that this 
// implementation assumes that the character encoding being used is ASCII. If 
// you are using a different character encoding, the ranges for lowercase and 
// uppercase alphabets may vary.
int	ft_isalpha(int c)
// The function takes an integer c as input, which represents the character
//  to be checked.
{
// It performs a logical OR (||) operation on two conditions:
// (c >= 'a' && c <= 'z'): This condition checks if the character c is within 
// the range of lowercase alphabets, from 'a' to 'z'.
// (c >= 'A' && c <= 'Z'): This condition checks if the character c is within 
// the range of uppercase alphabets, from 'A' to 'Z'.
// If either of these conditions is true, indicating that the character is 
// either a lowercase or uppercase alphabet, then the ft_isalpha function 
// returns true (non-zero). Otherwise, it returns false (zero).
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
