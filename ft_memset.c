/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 18:17:27 by azamario          #+#    #+#             */
/*   Updated: 2021/06/09 09:01:24 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The memset() function fills the first len bytes of the memory area
   pointed to by b with the constant byte c.
   *b == ponteiro para a região de memória que será preenchida
   c == valor usado para preencher a memória (será convertido para unsigned char para dar 1byte)
   n == número de bytes que será preenchido, não necessariamente o tamanho da array
   retorna cópia do ponteiro *b ou NULL em caso de erro
*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (len > 0)
	{
		*ptr = c;
		ptr++;
		len--;
	}
	return (b);
}
