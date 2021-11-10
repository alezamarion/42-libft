/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:13:18 by azamario          #+#    #+#             */
/*   Updated: 2021/11/10 01:24:54 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The tolower() function converts an upper-case letter to the corresponding lower-case letter.
The argument must be representable as an unsigned char or the value of EOF.

RETURN VALUES
If the argument is an upper-case letter, the tolower() function returns the corresponding lower-case 
letter if there is one; otherwise, the argument is returned unchanged.
*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
