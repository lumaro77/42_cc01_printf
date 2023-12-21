/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 11:15:04 by lmartin2          #+#    #+#             */
/*   Updated: 2022/03/08 14:44:13 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_printf(const char *str, ...)
// The ft_printf function takes a format string and a variable number of 
// arguments, then iterates through the format string, processing each 
// character. It uses the parser function to handle format specifiers and 
// corresponding arguments, and the c_printer function to print normal 
// characters. The function returns the total number of characters printed,
// or -1 if an error occurs during formatting.
{
	// Pointer to iterate through the format string
	char	*ptr;
	// Total number of characters printed
	int		num;
	// Error flag
	int		error;
	// Variable argument list
	va_list	list;

	// Set ptr to point to the beginning of the format string
	ptr = (char *)str;
	// Check if the format string is NULL
	if (!ptr)
		return (0); // Return 0 if the format string is NULL
	// Initialize the total number of characters printed
	num = 0;
	// Initialize the error flag
	error = 0;
	// Start the variable argument list
	va_start(list, str);
	// Iterate through the format string and check if the total number of characters printed is non-negative
	while (*ptr && num >= 0)
	{
		// Check if the current character is '%' and move to the next character
		if (*ptr == '%' && *ptr++)
			// Call the parser function to handle formatting and arguments
			num += parser(ptr++, list, &error);
		else
			// Call the c_printer function to print normal characters
			num += c_printer(*ptr++, &error);
	}
	// End the variable argument list
	va_end(list);
	// Check if an error occurred during formatting
	if (error)
		// Set the total number of characters printed to -1 if an error occurred
		num = -1;
	// Return the total number of characters printed or -1 if an error occurred
	return (num);
}

int	parser(char *ptr, va_list list, int *error)
{	
	// Check if the format specifier is for character
	if (*ptr == 'c') 
		// Call c_printer to print the character
		return (c_printer(va_arg(list, int), error)); 
	
	// Check if the format specifier is for string
	if (*ptr == 's') 
		// Call s_printer to print the string
		return (s_printer(va_arg(list, char *), error));
	
	// Check if the format specifier is for pointer
	if (*ptr == 'p') 
		// Call p_printer to print the pointer
		return (p_printer(va_arg(list, unsigned long long), error));

	// Check if the format specifier is for decimal or integer
	if (*ptr == 'd' || *ptr == 'i') 
		// Call i_printer to print the decimal or integer
		return (i_printer(va_arg(list, int), error)); 
	
	// Check if the format specifier is for unsigned decimal
	if (*ptr == 'u') 
		// Call u_printer to print the unsigned decimal
		return (u_printer(va_arg(list, unsigned int), error)); 
	
	// Check if the format specifier is for hexadecimal (lowercase)
	if (*ptr == 'x') 
		// Call x_low_printer to print the hexadecimal (lowercase)
		return (x_low_printer(va_arg(list, unsigned int), error)); 
	
	// Check if the format specifier is for hexadecimal (uppercase)
	if (*ptr == 'X') 
		// Call x_up_printer to print the hexadecimal (uppercase)
		return (x_up_printer(va_arg(list, unsigned int), error)); 
	
	// Check if the format specifier is for percent sign
	if (*ptr == '%')
		// Call c_printer to print the percent sign
		return (c_printer('%', error));

	// Return 0 if the format specifier is not recognized
	return (0); 
}


int	c_printer(char c, int *err)
{
	// num will contain the total number of characters printed
	int	num;

	// Initialize the number of characters printed
	num = 0; 
	// Check if there is no error
	if (!*err)
		// Print the character to the standard output
		num = write(1, &c, 1); 
	// Check if an error occurred during printing
	if (num < 0)
		// Set the error flag if an error occurred
		*err = 1; 
	// Return the number of characters printed
	return (num); 
}

int	s_printer(char *s, int *err)
{
	// num will contain the total number of characters printed
	int	num;
	
	// Check if the string is NULL
	if (!s) 
		// Print "(null)" if the string is NULL
		return (s_printer("(null)", err)); 
	// Initialize the number of characters printed
	num = 0; 
	// Iterate through the string and check for errors
	while (!*err && *s) 
	{
		// Call c_printer to print each character and check for errors
		if (c_printer(*s++, err) >= 0) 
			// Increment the number of characters printed
			num ++; 
		else
			// Set the error flag if an error occurred
			*err = 1; 
	}
	// Return the number of characters printed
	return (num); 
}


int	base_writer(unsigned long long nbr, int num, char *base, int *err)
{
	unsigned long long	size;
	
	// Check if the base string is NULL
	if (!base) 
		// Return 0 if the base string is NULL
		return (0);
	// Get the size of the base string
	size = (unsigned long long)ft_strlen(base); 
	// Check if the number is larger than the base size
	if (nbr > size - 1) 
		// Recursively call base_writer to handle the division
		num = base_writer(nbr / size, num, base, err);
	// Print the character corresponding to the remainder of the division 
	if (c_printer(base[nbr % size], err) >= 0) 
		// Increment the number of characters printed
		num++; 
	else
		// Set the error flag if an error occurred
		*err = 1; 
	// Return the total number of characters printed
	return (num); 
}
