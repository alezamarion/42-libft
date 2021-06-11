/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 16:30:45 by azamario          #+#    #+#             */
/*   Updated: 2021/06/09 13:25:06 by azamario         ###   ########.fr       */
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

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!little[i])
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] == big[j + i] && i + j < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
