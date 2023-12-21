/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 19:55:22 by lmartin2          #+#    #+#             */
/*   Updated: 2023/02/03 19:11:29 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

// The ft_lstlast function is implemented in the libft_bonus library. It 
// returns a pointer to the last element of a linked list.

t_list	*ft_lstlast(t_list *lst)
// The function takes a pointer lst as input, which points to the head of the
// linked list. It iterates through the linked list until it reaches the last
// element, and then returns a pointer to that last element.
{
	// The function first checks if lst is NULL. If it is, there are no 
	// elements in the list, so the function returns NULL.
	if (!lst)
		return (NULL);
	// A while loop is used to iterate through the linked list. Inside the
	// loop, the pointer lst is updated to point to the next element 
	// (lst->next) until it reaches the last element, where lst->next is NULL.
	while (lst->next)
		lst = lst->next;
	// Finally, the function returns the pointer to the last element of the
	// linked list.
	return (lst);
}
