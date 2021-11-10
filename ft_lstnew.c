/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 20:31:58 by azamario          #+#    #+#             */
/*   Updated: 2021/11/10 01:20:57 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
This function creates a new element of a list.
The ft_lstnew() function allocates (with malloc()) and returns a new element.
The variable 'content' is initialized with the value of the parameter
'content'. The variable 'next' is initialized to null.

void	*content	- content to create the new element with.
return				- The ft_lstnew() function returns the new element of the list.
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
