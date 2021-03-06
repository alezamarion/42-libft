/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 17:07:35 by azamario          #+#    #+#             */
/*   Updated: 2021/11/10 01:23:33 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The strlen() function computes the length of the string s.
The strlen() function returns the number of characters that precede the terminating NUL character.
*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*(s++))
		i++;
	return (i);
}
