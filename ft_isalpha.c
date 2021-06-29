/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 14:21:22 by azamario          #+#    #+#             */
/*   Updated: 2021/06/29 15:55:08 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The isalpha() function tests for any character for which isupper(3) or islower(3) is true.
The value of the argument must be representable as an unsigned char or the value of EOF.

The isalpha() function returns zero if the character tests false and returns non-zero 
if the character tests true.
*/


#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
