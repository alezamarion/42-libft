/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 22:13:29 by azamario          #+#    #+#             */
/*   Updated: 2021/06/07 12:51:51 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *result;
	
	result = 0;
	while (*s)
	{
		s++;
		if (c == *s)
			result = (char *)s;
	}
	return (result);		
}
