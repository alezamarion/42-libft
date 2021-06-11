/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 14:17:47 by azamario          #+#    #+#             */
/*   Updated: 2021/06/10 16:14:07 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The memmove() function copies len bytes from string src to string dst.
The two strings may overlap; the copy is always done in a non-destructive manner.

RETURN VALUES
The memmove() function returns the original value of dst.
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*aux_dst;
	char	*aux_src;

	aux_dst = dst;
	aux_src = (char *)src;
	if (dst > src)
	{
		aux_dst = aux_dst + len - 1;
		aux_src = aux_src + len - 1;
		while (len >= 1)
		{
			*aux_dst = *aux_src;
			aux_dst--, aux_src--, len--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
