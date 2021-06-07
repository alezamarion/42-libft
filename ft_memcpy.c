/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 18:03:11 by azamario          #+#    #+#             */
/*   Updated: 2021/06/07 12:51:10 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *dst_aux;
	const char *src_aux;
	
	dst_aux = dst;
	src_aux = src;

	while (n)
	{
		*dst_aux = *src_aux;
		dst_aux++;
		src_aux++;
		n--;
	}
	return dst;	
}