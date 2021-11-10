/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 18:01:14 by azamario          #+#    #+#             */
/*   Updated: 2021/11/10 01:23:07 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The strdup() function allocates sufficient memory for a copy of the string s1, does the copy, 
and returns a pointer to it.
The pointer may subsequently be used as an argument to the function free(3).

If insufficient memory is available, NULL is returned and errno is set to ENOMEM.
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		size;
	char	*new;

	i = 0;
	size = ft_strlen(s1);
	new = (char *)ft_calloc(size + 1, sizeof(char));
	if (new != NULL)
	{
		while (i < size)
		{
			new[i] = s1[i];
			i++;
		}
	}
	return (new);
}
