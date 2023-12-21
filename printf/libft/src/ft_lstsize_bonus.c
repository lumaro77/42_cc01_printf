/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 19:52:23 by lmartin2          #+#    #+#             */
/*   Updated: 2023/02/03 19:11:17 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

// The ft_lstsize function is implemented in the libft_bonus library. It 
// calculates the number of elements in a linked list. This implementation 
// allows for efficient calculation of the size of a linked list.
int	ft_lstsize(t_list *lst)
// The function takes a pointer lst as input, which points to the head of the
// linked list.
{
	int	num;
	// It initializes a variable num to 0, which will keep track of the number
	// of elements in the list.
	num = 0;
	// A while loop is used to iterate through each element of the linked list.
	// Inside the loop, the lst pointer is updated to point to the next element
	//  (lst->next) and the num variable is incremented by 1.
	while (lst)
	{
		lst = lst->next;
		num++;
	}
	// Once the end of the linked list is reached (i.e., lst becomes NULL), 
	// the loop exits and the final value of num is returned.
	return (num);
}
