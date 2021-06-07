/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 15:46:57 by azamario          #+#    #+#             */
/*   Updated: 2021/06/07 12:51:04 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *aux;

	aux = (unsigned char *)s;

	while(n--)
	{
		if (*aux != (unsigned char)c)
			aux++;
		else
			return (aux);
	}
	return (0);			
}
