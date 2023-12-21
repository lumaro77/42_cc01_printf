/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 21:52:16 by lmartin2          #+#    #+#             */
/*   Updated: 2023/02/03 19:00:58 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

// The ft_lstadd_back function is implemented in the libft_bonus library. It 
// adds a new element to the end of a linked list. This implementation allows
// for efficient addition of elements to the end of a linked list.
void	ft_lstadd_back(t_list **lst, t_list *new)
// The function takes a double pointer lst and a pointer new as input. It adds
// the new element to the end of the linked list pointed to by lst.
{
	t_list	*tmp;
	// The function first checks if the new element is not NULL. If it is NULL, 
	// it simply returns without making any changes to the linked list.
	if (!new)
		return ;
	// If the linked list pointed to by lst is empty (*lst is NULL), the new
	// element becomes the first element of the list, and the function returns.
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	// If the linked list is not empty, the function finds the last element of
	// the list using the ft_lstlast function from the libft_bonus library. It
	// assigns this last element to a temporary variable tmp. 
	tmp = ft_lstlast(*lst);
	// Then, it sets the next pointer of tmp to point to the new element, 
	// effectively adding it to the end of the list.
	tmp->next = new;
}
