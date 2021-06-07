/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 14:17:47 by azamario          #+#    #+#             */
/*   Updated: 2021/06/07 12:51:12 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	unsigned char *dst_aux;	
	unsigned char *src_aux;
	
	dst_aux = (unsigned char *)dst;
	src_aux = (unsigned char *)src;
	if (!dst_aux && !src_aux)
		return (0);
	i = 1;
	if (dst_aux > src_aux)
	{
		while (i <= len)
		{
			dst_aux[len - i] = src_aux[len - i];
			i++;
		}
		return (dst);
	}
	while (len > 0)
	{
		*(dst_aux++) = *(src_aux++);
		len--;
	}
	return (dst);	
}

//mlanca-c
