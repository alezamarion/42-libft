/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 17:10:34 by azamario          #+#    #+#             */
/*   Updated: 2021/11/10 01:25:01 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The toupper() function converts a lower-case letter to the corresponding upper-case letter.
The argument must be representable as an unsigned char or the value of EOF.

RETURN VALUES
If the argument is a lower-case letter, the toupper() function returns the corresponding upper-case letter
if there is one; otherwise, the argument is returned unchanged.
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
