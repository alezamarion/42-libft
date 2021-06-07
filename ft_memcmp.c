/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 16:27:58 by azamario          #+#    #+#             */
/*   Updated: 2021/06/07 12:51:07 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *t1;
	const unsigned char *t2;
	
	t1 = s1;
	t2 = s2;

	while(n--)
	{
		if (*t1 != *t2)
			return (*t1 - *t2);
		else
			t1++, t2++;
	}
	return (0);	
}
