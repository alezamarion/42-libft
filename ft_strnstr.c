/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 18:00:32 by azamario          #+#    #+#             */
/*   Updated: 2021/11/10 01:23:46 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The strnstr() function locates the first occurrence of the null-terminated string little 
in the string big, where not more than len characters are searched.  
Characters that appear after a `\0' character are not searched.  
Since the strnstr() function is a FreeBSD specific API, it should only be used when portability
is not a concern.

RETURN VALUES
If little is an empty string, big is returned; if little occurs nowhere in big, NULL is returned; 
otherwise a pointer to the first character of the first occurrence of little is returned.
*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len_size;

	len_size = ft_strlen(little);
	if (len_size == 0)
		return ((char *)big);
	if (len_size > ft_strlen(big))
		return (NULL);
	while (*big && len)
	{
		if (len_size > ft_strlen(big) || len < len_size)
			return (NULL);
		if (ft_strncmp(big, little, len_size) == 0 && len >= len_size)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
