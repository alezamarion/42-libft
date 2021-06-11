/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 21:12:06 by azamario          #+#    #+#             */
/*   Updated: 2021/06/09 10:11:01 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The strchr() function locates the first occurrence of c (converted to a char) 
in the string pointed to by s.  The terminating null character is considered to be part of 
the string; therefore if c is `\0', the functions locate the terminating `\0'.

RETURN VALUES
The functions strchr() return a pointer to the located character, or NULL
if the character does not appear in the string.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	
	if (*s == (c % 256))
		return ((char *)s);
	while (*s && *s != (c % 256))
	{
		s++;
		if (*s == (c % 256))
			return ((char *)s);
	}
	return (NULL);
	/*
	while (*s)
	{
		if (*s == (c % 256))
			return ((char *)s);
		s++;
	}
	if (*s == (c % 256))
		return ((char *)s);
	return (NULL);
	*/
}
