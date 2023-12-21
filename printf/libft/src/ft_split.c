/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 13:04:39 by lmartin2          #+#    #+#             */
/*   Updated: 2022/03/11 11:57:17 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// This code defines a function ft_split that takes in a constant character
// pointer s and a character c, and splits the string s into an array of
// strings based on the delimiter c. The code includes two helper functions:
// countwords and getword.

static size_t	countwords(char *s, char c)
// The countwords function counts the number of words in a string by iterating
// through each character and checking for transitions from delimiter to 
// non-delimiter.
{
	size_t	num;

	num = 0;
	if (*s && *s != c)
	{
		num++;
		s++;
	}
	while (*s)
	{
		if (*s != c && *(s - 1) == c)
			num++;
		s++;
	}
	return (num);
}

// The getword function extracts a specific word from a string based on
// its index by skipping over leading delimiters and finding the start and 
// end positions of the word.
static char	*getword(char *s, char c, size_t item)
// The function takes in a string s, a delimiter character c, and an index
// item specifying which word to extract.
{
	size_t	start;
	size_t	end;
	size_t	i;
	// Three variables start, end, and i are initialized to 0.
	start = 0;
	end = 0;
	i = 0;
	// The item value is incremented by 1 to account for 0-based indexing.
	item++;
	// The function enters a loop that iterates until reaching the desired
	// word at index item.
	while (item--)
	{
		// It skips over leading delimiters by incrementing start and i
		// until the current character is not equal to c.
		while (s[i] == c)
			start = ++i;
		// It finds the end of the current word by incrementing end and i
		// until reaching a delimiter character or the end of the string. 
		while (s[i] && s[i] != c)
			end = ++i;
	}
	// After exiting the loop, the function uses ft_substr to extract the
	// word from s using the start position (start) and the length of the
	// word (end - start). The extracted word is then returned.
	return (ft_substr(s, start, end - start));
}

char	**ft_split(char const *s, char c)
{
	size_t	num;
	char	**str;
	size_t	i;

	// The ft_split function starts by checking if s is NULL. If it is,
	// it returns NULL.
	if (!s)
		return (NULL);
	// It then counts the number of words in s using the countwords function.
	num = countwords((char *)s, c);
	// Memory is allocated for the array of strings str using ft_calloc.
	str = (char **)ft_calloc(sizeof(char *), num + 1);
	if (!str)
		return (NULL);
	i = -1;
	// The function then iterates through each word index and uses the 
	// getword function to extract each word and store it in str[i].
	while (++i < num)
	{
		str[i] = getword((char *)s, c, i);
		//If memory allocation for a word fails, it frees previously 
		// allocated memory for words and returns NULL.
		if (!str[i])
		{
			while (i--)
				free (str[i]);
			free (str);
			return (NULL);
		}
	}
	// Finally, it returns the array of strings str.
	return (str);
}
