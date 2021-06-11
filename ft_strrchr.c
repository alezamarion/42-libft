/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 22:13:29 by azamario          #+#    #+#             */
/*   Updated: 2021/06/10 16:15:00 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The strrchr() function is identical to strchr(), except it locates the last occurrence of c.
RETURN VALUES
The functions strrchr() return a pointer to the located character, or NULL 
if the character does not appear in the string.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i > 0 && s[i] != (char)c)
		i--;
	if (i == 0 && c != '\0' && (char)c != s[i])
		return (0);
	else
		return ((char *)&s[i]);
}
