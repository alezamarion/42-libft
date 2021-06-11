/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:04:21 by azamario          #+#    #+#             */
/*   Updated: 2021/06/07 21:55:47 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The isdigit() function tests for a decimal digit character.
Regardless of locale, this includes the following characters only:
``0''         ``1''         ``2''         ``3''         ``4''
``5''         ``6''         ``7''         ``8''         ``9''
The isnumber() function behaves similarly to isdigit(), but may recognize additional characters, 
depending on the current locale setting.
The value of the argument must be representable as an unsigned char or the value of EOF.
RETURN VALUES
The isdigit() return zero if the character tests false and return non-zero if the character tests true.
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
