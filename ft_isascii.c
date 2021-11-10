/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:21:48 by azamario          #+#    #+#             */
/*   Updated: 2021/11/10 01:19:43 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The isascii() function tests for an ASCII character, 
which is any character between 0 and octal 0177 inclusive.

The ft_isascii() function returns zero if the character tests false
and returns non-zero if the character tests true.
*/

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
