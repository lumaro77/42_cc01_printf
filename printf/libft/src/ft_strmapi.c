/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:50:14 by lmartin2          #+#    #+#             */
/*   Updated: 2022/03/11 12:44:10 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
// The ft_strmapi function takes two parameters: s, which is a pointer to a 
// string, and f, which is a function pointer that takes an unsigned integer and
//  a character as arguments and returns a character. It applies the function f 
// to each character of the string s along with its corresponding index and 
// returns a new string with the transformed characters.
{
	char			*str;
	unsigned int	i;
	// The function first checks if the input string s is NULL. If it is, it
	//  returns NULL.
	if (!s)
		return (NULL);
	// Then, it allocates memory for the new string str based on the length of
	// s using ft_calloc. ft_calloc ensures that the allocated memory is 
	// initialized to zero.
	str = (char *)ft_calloc(sizeof(char), ft_strlen(s) + 1);
	// Next, it checks if the memory allocation fails. If it does, it returns
	//  NULL.	
	if (!str)
		return (NULL);
	// The function then initializes an index variable i to -1.
	i = -1;
	// It enters a while loop that iterates through the string s until it 
	// reaches the end. Inside the loop, it calls the function f with the 
	// index i and the current character of s, and assigns the result of f to
	// the corresponding position in the new string str.
	while (s[++i])
		str[i] = f(i, s[i]);
	// After the loop, it returns the new string str.
	return (str);
}
