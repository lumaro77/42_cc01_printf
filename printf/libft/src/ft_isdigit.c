/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:57:02 by lmartin2          #+#    #+#             */
/*   Updated: 2022/02/23 14:36:04 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The ft_isdigit function is implemented in the libft library. It checks 
// whether a given character is a digit (0-9).
int	ft_isdigit(int c)
// The function takes an integer c as input, which represents the character to
//  be checked. This implementation provides a simple 
// and efficient way to check if a character is a digit using ASCII values.
{
// It checks if the value of c is between the ASCII codes of '0' 
// and '9', which correspond to the digits 0 to 9. If c is within this range, 
// the function returns true (non-zero), indicating that it is a digit. 
// Otherwise, it returns false (zero). 
	return (c >= '0' && c <= '9');
}
