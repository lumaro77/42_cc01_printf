/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:01:21 by lmartin2          #+#    #+#             */
/*   Updated: 2022/02/23 16:24:20 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
// The ft_toupper function takes an integer c as input, which represents a
//  character. It returns an integer representing the uppercase version of the
//  character.
{
	// The expression (c >= 'a' && c <= 'z') checks if the character is within
	// the lowercase range
    // If it is, the expression evaluates to 1, and ('A' - 'a') is added to the
	// character's ASCII value to convert it to uppercase
    // If it's not a lowercase character, the expression evaluates to 0 and the
	// original character is returned as it is
	return (c + (c >= 'a' && c <= 'z') * ('A' - 'a'));
}
