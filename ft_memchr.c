/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 15:46:57 by azamario          #+#    #+#             */
/*   Updated: 2021/06/09 15:00:05 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 The memchr() function locates the first occurrence of c 
 (converted to an unsigned char) in string s.
 The memchr() function returns a pointer to the byte located, 
 or NULL if no such byte exists within n bytes.
*/
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;

	str = (const char *)s;
	while (n-- > 0)
	{
		if (*str == (c % 256))
			return ((void *)(str));
		else
			str++;
	}
	return (NULL);
}
