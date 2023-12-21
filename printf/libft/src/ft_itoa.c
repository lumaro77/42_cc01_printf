/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:48:14 by lmartin2          #+#    #+#             */
/*   Updated: 2022/03/11 11:03:12 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The ft_itoa function is implemented in the libft library. It converts an 
// integer to a string representation.

static size_t	intlen(int num)
// The intlen function calculates the length of the integer by counting the 
// number of digits. It handles the special case where the input is zero or 
// negative zero by returning a length of 1. Please note that this 
// implementation assumes that the ft_strdup and ft_calloc functions are 
// available in the libft library.
{
	size_t	len;

	if (num == 0 || num == -0)
		return (1);
	len = 0 + 1 * (num < 0);
	while (num)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
// The function takes an integer n as input and converts it into a string
// representation.
{
	size_t		len;
	long int	nbr;
	char		*str;
	// If the input n is equal to INT_MIN, which is the minimum value for a 
	// signed integer, the function returns a string representation of 
	// "-2147483648" using the ft_strdup function from the libft library.
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	len = intlen(n);
	// The function allocates memory for the resulting string using ft_calloc
	//  from the libft library. The size of the memory block is (len + 1) to 
	// accommodate the digits and a null terminator.
	str = (char *)ft_calloc(sizeof(char), (len + 1));
	if (!str)
		return (NULL);
	// The variable nbr is assigned the absolute value of n, and the sign of n
	//  is handled separately to determine if it should be negative.
	nbr = (long int)n - (n < 0) * 2 * (long int)n;
	// A loop is used to extract each digit of the number by performing modulo
	//  10 and adding it to the character '0'. The digit is then stored in the
	//  corresponding position of the string.	
	while (len--)
	{
		str[len] = nbr % 10 + '0';
		nbr /= 10;
	}
	// Finally, if the original number n is negative, the minus sign '-' is 
	// added as the first character of the string.
	if (n < 0)
		*str = '-';
	// The resulting string is returned.
	return (str);
}
