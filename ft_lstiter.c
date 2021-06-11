/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 16:50:44 by azamario          #+#    #+#             */
/*   Updated: 2021/06/10 17:05:27 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_lstiter() function iterates the list 'lst' and applies the function
'f' to the content of each element.
**
@param	t_list	*lst		- address of a pointer to an element.
@param	void (*f)(void *)	- address of the function used to iterate on the 								list.
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != 0)
	{
		f(lst->content);
		lst = lst->next;
	}	
}
