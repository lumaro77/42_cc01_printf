/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 21:51:47 by lmartin2          #+#    #+#             */
/*   Updated: 2023/02/03 19:01:06 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

// The ft_lstadd_front function is implemented in the libft_bonus library. It 
// adds a new element to the front of a linked list. This implementation allows
//  for efficient addition of elements to the front of a linked list.
void	ft_lstadd_front(t_list **lst, t_list *new)
// The function takes a double pointer lst and a pointer new as input. It adds
// the new element to the front of the linked list pointed to by lst.
{
	// The function first checks if the new element is not NULL. If it is NULL, 
	// it simply returns without making any changes to the linked list.
	if (new)
	{
		// If the linked list pointed to by lst is not empty (*lst is not NULL),
		//  the next pointer of the new element is set to point to the current
		// first element of the list (*lst). This ensures that the new element
		// becomes the new first element of the list.	
		if (*lst)
			new->next = *lst;
		// Finally, the pointer *lst is updated to point to the new element, 
		// making it the new head of the linked list.
		*lst = new;
	}
}
