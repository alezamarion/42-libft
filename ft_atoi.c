/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 22:36:53 by azamario          #+#    #+#             */
/*   Updated: 2021/06/10 16:28:23 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The atoi() function converts the initial portion of the string pointed to by str to int representation.
The ft_atoi() function returns the int representation of the string.
*/

/* 1 ->The first thing we want our function to do is make sure to skip over any
	kind of spacing that could be found at the beginning of the string.*/

/* 2 -> Once past the extra spacing, if it exists, we are checking to see if there
	 is a negative symbol at the beginning of the number we will be converting.
	 if we see a negative symbol or a positive symbol we adjust accordingly. */

/* 3 ->Here we convert our string of characters from char to int so long as they
	are numbers. If the character we are currently on is a number, we
	converted it to its ascii numerical value. */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			res;
	int			sign;
	int			i;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r' //1
		|| str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+') //2
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9') //3
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}
