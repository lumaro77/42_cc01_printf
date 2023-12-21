/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:05:15 by lmartin2          #+#    #+#             */
/*   Updated: 2022/04/04 13:09:14 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// This code is an implementation of the ft_atoi function from the libft library.
// It converts a string representation of an integer to its corresponding integer
// value.This code provides a simple and efficient implementation of the 
// ft_atoi function.

int ft_atoi(const char *str)
{
    int res;
    int sign;
	// The res variable is used to store the resulting integer value.
    res = 0;
    // 	The while loop is used to ignore any leading whitespace characters in the 
	// 	string.
    while (*str == ' ' || *str == '\n' || *str == '\t'
           || *str == '\r' || *str == '\v' || *str == '\f')
        ++str;
    // 	The sign variable is used to determine the sign of the number.
	// 	It is initialized to 1 for positive numbers and -1 for negative numbers.
    sign = 1 - 2 * (*str == '-');
    // 	The if statement checks if the first character of the string is a minus sign (-)
	// 	or a plus sign (+). If it is, the sign variable is updated accordingly and the 
	// 	first character is skipped.
	if (*str == '-' || *str == '+')
        ++str;
   	// The second while loop converts the remaining characters in the string to an 
	// integer. It multiplies the current value of res by 10 and adds the numeric 
	// value of the current character (converted from ASCII to an integer) to it. 
	// The sign variable is used to handle negative numbers.
    while (*str && ft_isdigit((unsigned char)*str))
        res = res * 10 + sign * (*str++ - '0');
    // Finally, the resulting integer value is returned.
	return (res);
}
