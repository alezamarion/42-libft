/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 21:24:05 by azamario          #+#    #+#             */
/*   Updated: 2021/11/10 01:19:59 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters 
#1. the integer to convert.

Return value 
The string representing the integer. NULL if the allocation fails.

External functs. 
malloc

Description 
Allocates (with malloc(3)) and returns a string representing the integer received as an argument.
Negative numbers must be handled.

This function allocates memory and returns a 'fresh' string of characters
terminated with a '\0' that is the char equivalent of the int passed in
the parameter. Negative numbers should be managed as well. If the allocation
fails the function will return NULL. */

#include "libft.h"

int	ft_len(int num)
{
	size_t	len;

	if (num <= 0)
		len = 1;
	else
		len = 0;
	while (num != 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

int	ft_to_positive(int num)
{
	if (num < 0)
		return (-num);
	else
		return (num);
}

char	*ft_itoa(int n)
{
	int		sign;
	int		len;
	char	*result;

	if (n < 0)
		sign = -1;
	else
		sign = 1;
	len = ft_len(n);
	result = (char *)malloc(sizeof(char) * len + 1);
	if (result == NULL)
		return (0);
	result[len] = '\0';
	len--;
	while (len >= 0)
	{
		result[len] = '0' + ft_to_positive(n % 10);
		n = ft_to_positive(n / 10);
		len--;
	}
	if (sign == -1)
		result[0] = '-';
	return (result);
}
