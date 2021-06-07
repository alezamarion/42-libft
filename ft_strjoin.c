/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 20:41:00 by azamario          #+#    #+#             */
/*   Updated: 2021/06/07 13:42:28 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*string;
	size_t		i;
	size_t		j;

	i = 0;
	string = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(*string));
	if (!s1 || !s2 || !string)
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

/*
char	*ft_strjoin(char const *s1, char const *s2)
{
	char *new_str;
	char *string_return;

	new_str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(*new_str));	
	string_return = new_str;
	
	if (!s1 || !s2 || !new_str)
		return (0);
	while (*s1)
		*new_str = *s1;
		new_str++, s1++;
	while (*s2)
		*new_str = *s2;
		new_str++, s2++;
	*new_str = '\0';
	return (string_return);	
}
*/