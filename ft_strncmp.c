/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 13:08:41 by azamario          #+#    #+#             */
/*   Updated: 2021/06/09 13:31:50 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The strncmp() function compares not more than n characters. Because strncmp() is designed for 
comparing strings rather than binary data, characters that appear after a `\0' character 
are not compared.
The strcmp() and strncmp() functions return an integer greater than, equal to, or less than 0, 
according as the string s1 is greater than, equal to, or less than the string s2.  
The comparison is done using unsigned characters, so that `\200' is greater than `\0'.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && *s1 && *s2)
	{
		if ((unsigned char)(*s1) != (unsigned char)(*s2))
			return ((unsigned char)(*s1) - (unsigned char)(*s2));
		n--, s1++, s2++;
	}
	if (n != 0 && (unsigned char)(*s1) != (unsigned char)(*s2))
		return ((unsigned char)(*s1) - (unsigned char)(*s2));
	return (0);
}
