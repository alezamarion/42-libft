/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 22:27:00 by azamario          #+#    #+#             */
/*   Updated: 2021/06/10 17:05:00 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_lstclear() function deletes and frees the given element and every
successor of that element, using the function ’del’ and free(3). Finally, the
pointer to the list must be set to null.

@param	t_list	**lst		- address of a pointer to an element.
@param	void (*del)(void*)	- address of the function used to delete the content of the content.
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;

	if (!*lst)
		return ;
	while (*lst)
	{
		aux = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = aux;
	}
	*lst = 0;
}
