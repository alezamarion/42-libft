/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 12:50:02 by azamario          #+#    #+#             */
/*   Updated: 2021/06/07 22:49:57 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	substr_len;
	char	*substr;

	i = 0;
	if (s == 0)
		return (0);
	substr_len = ft_strlen(s);
	substr = malloc((len + 1) * sizeof(char));
	if (substr == 0)
		return (0);
	while (i < len && (start + i) < substr_len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
