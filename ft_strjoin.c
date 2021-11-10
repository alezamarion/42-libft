/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 20:41:00 by azamario          #+#    #+#             */
/*   Updated: 2021/11/10 01:23:13 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
This function joins two strings together.
The ft_strjoin() alocates (with malloc(3)) and returns a new string, which
is the result of the concatenation of ’s1’ and ’s2’.

const char	*s1		- prefix string.
const char	*s2		- suffix string.

returns 			- The ft_strjoin() function returns the new string, or null if the allocation fails.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*string;
	size_t		i;
	size_t		j;

	if (!s1 || !s2)
		return (0);
	i = 0;
	string = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(*string));
	if (!string)
		return (0);
	while (s1[i])
	{
		string[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		string[i] = s2[j];
		i++;
		j++;
	}
	string[i] = '\0';
	return (string);
}
