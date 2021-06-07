/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 16:30:45 by azamario          #+#    #+#             */
/*   Updated: 2021/06/07 12:51:46 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (!little[i])
		return((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] == big[j+i] && i + j < len)
		{
			if (little[j + 1] == '\0')
				return((char *)big + i);
			j++;
		}
		i++;
	}
	return (NULL);	
}

//mlanca-c