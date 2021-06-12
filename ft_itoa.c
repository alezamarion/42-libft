/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 21:24:05 by azamario          #+#    #+#             */
/*   Updated: 2021/06/10 16:17:57 by azamario         ###   ########.fr       */
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

static int	count_digits(int n) //3000		//ex 3000 = 3000/10 = 300 ->1
{							//	    300/10 = 30 -> 2
	int	n_digits;				//	    30/10 = 3 -> 3
							// 	     3/10 = 0 -> 4
	n_digits = 0;
	if (n < 0)
		n = n * -1;
	while (n > 0)
	{
		n = n / 10;
		n_digits++;
	}
	return (n_digits); //4
}

static int	power(int n_digits) //3
{
	int	p10;

	p10 = 1;
	while (n_digits > 0)				//ex: 3000 3>0 | 10 || 2>0 100 || 1>0 1000 | 0
	{
		p10 = p10 * 10;	    
		n_digits--;
	}
	return (p10); // 1000
}

char	*ft_itoa(int n) /3000
{
	char	*itoa;
	int	p10;
	int	i;
				 // 3  + 2 = 5
	itoa = (char *)malloc((count_digits(n) + 2) * sizeof(char)); //aloca para o sinal + 1 digit
	if (!itoa)
		return (NULL);
	if (n == -2147483648)
		return (ft_substr("-2147483648", 0, 11)); //ft_substr vai colocar o null
	i = 0;
	if (n < 0)						
	{
		itoa[i++] = '-';				//adiciona sinal no início	
		n = n * (-1);					//transforma número em positivo
	}		//4 - 1 = 3
	p10 = power(count_digits(n) - 1); 
	while (p10 > 0) // p10 == 1000
	{
		itoa[i++] = (n / p10 % 10 + 48); // 3000/1000 = 3%10 = 3+48 = 3
		p10 = p10 / 10; //sobra um espaço que foi alocado, após colocar o '\0'
	}
	itoa[i] = '\0';
	return (itoa);
}

/* ft_substr
Parameters
#1. The string from which to create the substring.
#2. The start index of the substring in the string ’s’.
#3. The maximum length of the substring.

Return value 
The substring. NULL if the allocation fails.

External functs
malloc

Description
Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’.
*/
