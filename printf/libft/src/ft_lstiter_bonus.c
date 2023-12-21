/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 21:51:14 by lmartin2          #+#    #+#             */
/*   Updated: 2023/02/03 19:11:32 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

// The ft_lstiter function is implemented in the libft_bonus library. It 
// iterates over a linked list and applies a function to each element. This
// implementation allows for efficient iteration over a linked list and 
// processing of its elements.

void	ft_lstiter(t_list *lst, void (*f)(void *))
// The function takes a pointer lst and a function pointer f as input. It 
// iterates over the linked list pointed to by lst and applies the function f 
// to each element's content.
{
	// The function first checks if f or lst is NULL. If either of them is
	//  NULL, there is nothing to iterate over, so the function returns.
	if (!f || !lst)
		return ;
	// A while loop is used to iterate through each element of the linked
	//  list. 
	while (lst)
	{
		// Inside the loop, the function f is called with the content of
		//  the current element (lst->content) as its argument. This allows for
		//  custom processing of the content of each element.
		f(lst->content);
		// Finally, the pointer lst is updated to point to the next element 
		// (lst->next) for the next iteration.
		lst = lst->next;
	}
}
