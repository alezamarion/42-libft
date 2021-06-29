/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 21:49:46 by azamario          #+#    #+#             */
/*   Updated: 2021/06/29 15:55:14 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_calloc() function allocates memory.The allocated memory is aligned
such that it can be used for any data type.

The calloc() function contiguously allocates enough space for count objects
that are size bytes of memory each and returns a pointer to the allocated
memory. The allocated memory is filled with bytes of value zero.

count = how many units
size+ size of each block
*/


#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;
	size_t	i;
	size_t	len;

	i = 0;
	len = count * size;
	memory = malloc(len);
	if (memory == 0)
		return (0);
	while (len > 0)
	{
		((char *)memory)[i] = 0;
		i++, len--;
	}
	return (memory);
}
