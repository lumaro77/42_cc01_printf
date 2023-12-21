/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:57:26 by lmartin2          #+#    #+#             */
/*   Updated: 2022/02/23 14:40:45 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The ft_isalnum function is implemented in the libft library. It checks
// whether a given character is an alphanumeric character (i.e., a letter or a
// digit).this implementation provides a convenient way to check if a character
// is alphanumeric using the ft_isalpha and ft_isdigit functions from the libft
// library. Please note that the specific implementation details of the
// ft_isalpha and ft_isdigit functions may vary depending on the version of
// the libft library you are using.

int	ft_isalnum(int c)
// The function takes an integer c as input, which represents the character to
// be checked. It calls two other functions from the libft library, ft_isalpha
// and ft_isdigit, to determine if the character is either an alphabetic
// character or a digit.
{
// The function takes an integer c as input, which represents the character to
// be checked. It calls two other functions from the libft library, ft_isalpha
// and ft_isdigit, to determine if the character is either an alphabetic 
// character or a digit.
	return (ft_isalpha(c) || ft_isdigit(c));
}
