/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 18:03:11 by azamario          #+#    #+#             */
/*   Updated: 2021/06/10 16:15:21 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
This function copies a memory area.
The ft_memcpy() function copies n bytes from memory area src to memory area
dst.  If dst and src overlap, behavior is undefined.  Applications in which
dst and src might overlap should use memmove(3) instead.

@param	void		*dst	- string from where n bytes of src will be copied to.
@param	const void	*src	- string to be copied to dst.
@param	size_t		n	- number of bytes to be copied from src to dst.

@return - The memcpy() function returns the original value of dst.
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*src_aux;
	char		*dst_aux;

	if (dst == src)
		return (dst);
	src_aux = (const char *)src;
	dst_aux = (char *)dst;
	while (n > 0)
	{
		*(dst_aux++) = *(src_aux++);
		n--;
	}
	return (dst);
}
