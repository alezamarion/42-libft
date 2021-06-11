/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 18:20:49 by azamario          #+#    #+#             */
/*   Updated: 2021/06/09 10:08:15 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

This function does size-bounding string concatenation.
The strlcat() function concatenates strings with the same input parameters
It's designed to be safer, more consistent, and less error prone replacement
for the easily misused function strncat().
strlcat() takes the full size of the destination buffer and guarantee
NULL-termination if there is room. Note that room for the NULL should be
included in dstsize.
strlcat() appends string src to the end of dst.  It will append at most
dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
dstsize is 0 or the original dst string was longer than dstsize (in practice
this should not happen as it means that either dstsize is incorrect or that
dst is not a proper string)
If the src and dst strings overlap, the behavior is undefined.

RETURN VALUES
The strlcat() function returns the total length of the string it has
tried to create - that means the initial length of dst plus the length
of src.
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;

	i = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size <= len_dst)
		return (size + len_src);
	while (dst[i])
		i++;
	while (*src && i < size - 1)
		dst[i++] = *(src++);
	dst[i] = '\0';
	return (len_dst + len_src);
}
