/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 15:34:23 by azamario          #+#    #+#             */
/*   Updated: 2021/06/10 16:15:46 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
     The memccpy() function copies bytes from string src to string dst.
	 If the character c (as converted to an unsigned char) occurs in the string src, 
	 the copy stops and a pointer to the byte after the copy of c in the string dst is returned. 
	 Otherwise, n bytes are copied, and a NULL pointer is returned.

	The source and destination strings should not overlap, as the behavior is undefined.
*/

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*src_aux;
	unsigned char	*dst_aux;

	src_aux = (unsigned char *)src;
	dst_aux = (unsigned char *)dst;
	while (n > 0)
	{
		*(dst_aux++) = *src_aux;
		if (*src_aux == (unsigned char)c)
			return (dst_aux);
		src_aux++;
		n--;
	}
	return (0);
}
