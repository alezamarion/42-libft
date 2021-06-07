/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 21:57:05 by azamario          #+#    #+#             */
/*   Updated: 2021/06/07 13:28:09 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s1)
{
	char *string;
	size_t i;
	
	string = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!string)
		return (NULL);
	i = 0;
	while(s1[i])
	{
		string[i] = s1[i];
		i++;
	}
	string[i] = '\0';
	return (string);
}
//mlanca-c