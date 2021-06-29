/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 16:54:08 by azamario          #+#    #+#             */
/*   Updated: 2021/06/29 16:01:04 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_lstmap() function iterates the list ’lst’ and applies the function ’f’
to the content of each element. Creates a new list resulting of the
successive applications of the function ’f’. The ’del’ function is used to
delete the content of an element if needed.

t_list *lst			- adress of a pointer to an element.
void *(*f)(void *)	- adress of the function used to iterate on the list.
void (*del)(void *)	- adress of the function used to delete the content of an element instead.
return 				- The ft_lstmap() function returns the new list, or null if the	allocation fails.
*/


#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*elem;

	if (!lst)
		return (0);
	new_lst = 0;
	while (lst)
	{
		elem = ft_lstnew(f(lst->content));
		if (!elem)
		{
			ft_lstclear(&new_lst, del);
			return (0);
		}
		ft_lstadd_back(&new_lst, elem);
		lst = lst->next;
	}
	return (new_lst);
}
