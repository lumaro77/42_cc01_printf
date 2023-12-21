/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 20:13:18 by lmartin2          #+#    #+#             */
/*   Updated: 2023/02/03 19:11:25 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

// The ft_lstmap function is implemented in the libft_bonus library. It
// creates a new linked list by applying a function to each element of the 
// original linked list. This implementation allows for creating a new linked
// list by applying a function to each element of the original linked list.
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// The function takes a pointer lst as input, which points to the head of the
// original linked list. It also takes two function pointers f and del. The f
// function is applied to each element's content to create a new content for
// the corresponding element in the new linked list. The del function is used 
// to delete the content in case of an error.
{
	t_list	*lstmap;
	t_list	*item;
	void	*my_content;
	// The function first checks if lst is NULL. If it is, there are no 
	// elements in the original list, so the function returns NULL.
	if (!lst)
		return (NULL);
	lstmap = NULL;
	// A while loop is used to iterate through each element of the original
	// linked list. Inside the loop, the f function is called with the content
	// of the current element (lst->content) as its argument. This creates a 
	// new content for the corresponding element in the new linked list.
	while (lst)
	{
		// A new element (item) is then created using ft_lstnew, which takes 
		// the new content as its argument. If ft_lstnew fails to allocate 
		// memory for the new element, an error occurs. In that case, the
		//  function frees the memory occupied by the new content (my_content),
		//  clears the newly created linked list (lstmap) using ft_lstclear, 
		// and returns NULL.
		my_content = f(lst->content);
		item = ft_lstnew(my_content);
		if (!item)
		{
			if (my_content)
				free(my_content);
			ft_lstclear(&lstmap, del);
			return (NULL);
		}
		// If the new element is successfully created, it is added to the end
		//  of the new linked list using ft_lstadd_back
		ft_lstadd_back(&lstmap, item);
		lst = lst->next;
	}
	// After iterating through all elements of the original linked list, the
	// function returns a pointer to the new linked list (lstmap).
	return (lstmap);
}
