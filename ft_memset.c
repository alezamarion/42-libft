/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 18:17:27 by azamario          #+#    #+#             */
/*   Updated: 2021/11/10 01:22:12 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
This function fills a byte string with a byte value.
The ft_memset() function writes len bytes of value c (converted to an unsigned char) to the string b.

void 	*b		- string that is going to be overwritten.
int 	c		- value (character) that is going to be written in b.
size_t 	len		- number of bytes that c is going to be written in b.

return			- the ft_memset function returns its first argument.
*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (len > 0)
	{
		*ptr = c;
		ptr++;
		len--;
	}
	return (b);
}
