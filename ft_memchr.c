/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 15:46:57 by azamario          #+#    #+#             */
/*   Updated: 2021/11/10 01:21:22 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
This function locates a byte in a byte string.
The ft_memchr() function locates the first occurrence of c (converted to an unsigned char) in string s.

const void	*s	- string where character is searched.
int		c		- character that is to be searched.
size_t	n		- number of bytes to check in the string.

return 			- The ft_memchr() function returns a pointer to the byte located, or NULL
				if no such byte exists within n bytes.
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
