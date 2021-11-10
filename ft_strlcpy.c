/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 19:07:23 by azamario          #+#    #+#             */
/*   Updated: 2021/11/10 01:23:27 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The strlcpy() function copy strings. It's designed to be safer, more consistent, and less error prone
replacements for strncpy(3) and strncat(3). Unlike those functions, strlcpy() take the 
full size of the buffer (not just the length) and guarantee to NUL-terminate the result 
(as long as size is larger than 0). 
Note that a byte for the NUL should be included in size. 
Also note that strlcpy() only operate on true ''C'' strings. This means that src must be NUL-terminated.

The strlcpy() function copies up to size -1 characters from the NUL-terminated string src to dst, 
NUL-terminating the result.

Return Values
The strlcpy() function return the total length of the string they tried to create. 
That means the length of src.
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	const char	*src_aux;

	if (!dst || !src)
		return (0);
	src_aux = (const char *)src;
	if (size > 0)
	{
		while (size > 1 && *src_aux)
		{
			*(dst++) = *(src_aux++);
			size--;
		}
		*dst = '\0';
	}
	return (ft_strlen(src));
}
