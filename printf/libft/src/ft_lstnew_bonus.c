/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:17:36 by lmartin2          #+#    #+#             */
/*   Updated: 2023/02/03 19:11:21 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

// The ft_lstnew function is implemented in the libft_bonus library. It 
// creates a new element for a linked list.
t_list	*ft_lstnew(void *content)
// The function takes a pointer content as input, which represents the content
//  of the new element to be created. 
{
	t_list	*item;
	// It allocates memory for a new element (item) using the malloc function.
	item = (t_list *)malloc(sizeof(t_list));
	// If malloc fails to allocate memory, the function returns NULL to 
	// indicate an error.
	if (!item)
		return (NULL);
	// If memory allocation is successful, the next pointer of the new element
	// is set to NULL, indicating that it is the last element in the linked 
	// list. 
	item->next = NULL;
	// The content pointer of the new element is set to the input content
	// pointer.
	item->content = content;
	// Finally, the function returns a pointer to the newly created element.
	return (item);
}
