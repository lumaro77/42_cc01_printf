/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:02:11 by lmartin2          #+#    #+#             */
/*   Updated: 2022/02/23 16:25:43 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
// The ft_tolower function takes an integer c as input, which represents a 
// character. It returns an integer representing the lowercase version of the 
// character.
{
	// The expression (c >= 'A' && c <= 'Z') checks if the character is within
	//  the uppercase range
    // If it is, the expression evaluates to 1, and ('a' - 'A') is added to 
	// the character's ASCII value to convert it to lowercase
    // If it's not an uppercase character, the expression evaluates to 0 and 
	// the original character is returned as it is
	return (c + (c >= 'A' && c <= 'Z') * ('a' - 'A'));
}
