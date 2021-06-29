/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 21:42:37 by azamario          #+#    #+#             */
/*   Updated: 2021/06/29 16:03:49 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_lstsize() function counts the number od elements in a list.

t_list	*lst	- the beginning of the list.
return 			- ft_lstsize() function returns the number of elements in a list.
*/


#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
