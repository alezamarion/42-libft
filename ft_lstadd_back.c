/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 21:20:36 by azamario          #+#    #+#             */
/*   Updated: 2021/06/10 17:04:24 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
This function adds an element to a list. 
The ft_lstadd_back() function adds the element 'new' at the end of the list.

@param	t_list 	**lst	- address of a pointer to the first link of a list.
@param	t_list	*new	- address of a pointer to the element to be added to the list.
*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	tmp = *lst;
	if (!tmp)
		*lst = new;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
}
