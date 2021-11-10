/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 13:13:36 by azamario          #+#    #+#             */
/*   Updated: 2021/11/10 01:19:21 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    The bzero() function erases the data in the n bytes of the memory
    starting at the location pointed to by s, by writing zeros (bytes
    containing '\0') to that area.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}
