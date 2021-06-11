/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 21:57:05 by azamario          #+#    #+#             */
/*   Updated: 2021/06/07 22:23:50 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The strdup() function allocates sufficient memory for a copy of the string s1, does the copy, 
and returns a pointer to it.
The pointer may subsequently be used as an argument to the function free(3).

If insufficient memory is available, NULL is returned and errno is set to ENOMEM.
*/

#include "libft.h"

char	*strdup(const char *s1)
{
	char	*string;
	size_t	i;

	string = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!string)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		string[i] = s1[i];
		i++;
	}
	string[i] = '\0';
	return (string);
}
