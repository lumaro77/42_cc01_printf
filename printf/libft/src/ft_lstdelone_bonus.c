/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 20:02:03 by lmartin2          #+#    #+#             */
/*   Updated: 2023/02/03 19:11:36 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

// The ft_lstdelone function is implemented in the libft_bonus library. It
// deletes a single element from a linked list. Finally, the memory occupied
// by the element itself is freed using the free function.
void	ft_lstdelone(t_list *lst, void (*del)(void *))
// The function takes a pointer lst and a function pointer del as input. It 
// deletes the element pointed to by lst from the linked list by freeing the 
// memory occupied by its content and the element itself.
{
	// The function first checks if the element is NULL. If it is, there is
	// nothing to delete, so the function returns.
	if (!lst)
		return ;
	// The del function is called with the content of the element 
	// (lst->content) as its argument. This allows for custom handling of
	// the content before freeing the memory. The del function is responsible
	//  for freeing any dynamically allocated memory within the content.
	del(lst->content);
	// Finally, the memory occupied by the element itself is freed using the
	// free function.
	free(lst);
}
