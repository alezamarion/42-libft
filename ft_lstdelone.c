/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 22:17:09 by azamario          #+#    #+#             */
/*   Updated: 2021/11/10 01:20:34 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_lstdelone() function takes as a parameter an element and frees the
memory of the element’s content using the function ’del’ given as a parameter
and free the element. The memory of ’next’ must not be freed.

t_list	*lst			- the element to free.
void (*del)(void *)		- the address of the function used to delete the content.
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
