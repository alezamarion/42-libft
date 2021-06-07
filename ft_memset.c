/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 18:17:27 by azamario          #+#    #+#             */
/*   Updated: 2021/06/07 12:51:17 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	
	unsigned char *ptr;
	ptr = b;

	while (len > 0)
	{
		*ptr = c;
		ptr++;
		len--;
	}
	return (b);	
}