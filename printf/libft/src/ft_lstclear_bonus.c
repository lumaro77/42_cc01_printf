/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 20:04:56 by lmartin2          #+#    #+#             */
/*   Updated: 2023/02/03 19:11:41 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

// The ft_lstclear function is implemented in the libft_bonus library. It 
// clears a linked list by deleting all of its elements. This implementation 
// allows for efficient clearing of a linked list and freeing memory resources.
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	// The function takes a double pointer lst and a function pointer del as
	// input.  It clears the linked list pointed to by lst by deleting all of
	// its elements using the ft_lstdelone function from the libft_bonus library.
	t_list	*tmp;
	// The function first checks if the linked list is empty (*lst is NULL).
	// If it is, there are no elements to clear, so the function returns.
	if (!*lst)
		return ;
	// A while loop is used to iterate through each element of the linked 
	// list. Inside the loop, the next element of the current element is 
	// stored in a temporary variable tmp. Then, the current element is 
	// deleted using the ft_lstdelone function, which calls the provided del 
	// function to free the memory occupied by the element's content. Finally,
	// the pointer *lst is updated to point to the next element (tmp) for the 
	// next iteration.
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	// After the loop finishes, all elements of the linked list have been
	// deleted. To ensure that the pointer *lst no longer points to any valid
	//  element, it is set to NULL.
	*lst = NULL;
}
