/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 15:34:23 by azamario          #+#    #+#             */
/*   Updated: 2021/06/07 12:51:00 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *dst_aux;
	unsigned char *src_aux;
	
	dst_aux = (unsigned char *)dst;
	src_aux = (unsigned char *)src;
	while (n)
	{
		*dst_aux = *src_aux;
		dst_aux++, src_aux++;
		n--;	
		if (*src_aux == (unsigned char)c)
			return (src_aux + 1);
	}
	return (0);		
}
