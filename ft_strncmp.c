/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 13:08:41 by azamario          #+#    #+#             */
/*   Updated: 2021/06/07 12:51:43 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	
	while (n-- && *s1)
		if (*s1 == *s2)
			s1++, s2++;
		else
			return ( (unsigned char)*s1 - (unsigned char)*s2 );
	return (0);
}
