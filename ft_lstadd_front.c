/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 21:02:42 by azamario          #+#    #+#             */
/*   Updated: 2021/06/10 17:04:43 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
This function adds an element to a list. 
The ft_lstadd_front() functionn adds the element 'new' at the beginning of
the list.

@param	t_list 	**lst	- address of a pointer to the first link of a list.
@param	t_list	*new	- address of a pointer to the element to be added to the list.
*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}
