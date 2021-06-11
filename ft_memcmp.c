/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 16:27:58 by azamario          #+#    #+#             */
/*   Updated: 2021/06/09 09:43:23 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
     The memcmp() function compares byte string s1 against byte string s2.
	 Both strings are assumed to be n bytes long.

     The memcmp() function returns zero if the two strings are identical, 
	 otherwise returns the difference between the first two differing bytes 
	 (treated as unsigned char values, so that `\200' is greater than `\0', for example).
	 Zero-length strings are always identical.

*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*t1;
	const char	*t2;

	t1 = (const char *)s1;
	t2 = (const char *)s2;
	while (n > 0)
	{
		if (*t1 != *t2)
			return ((unsigned char)*t1 - (unsigned char)*t2);
		t1++, t2++, n--;
	}
	return (0);
}
