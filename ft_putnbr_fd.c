/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 17:43:22 by azamario          #+#    #+#             */
/*   Updated: 2021/06/09 14:52:57 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters 
#1. The integer to output.
#2. The file descriptor on which to write.

External functs
write

Description 
Outputs the integer ’n’ to the given file descriptor.
*/

/*This function is exactly the same as our ft_putnbr function except that we
 * will be using our ft_putchar_fd function instead of ft_putchar beacuse we 
 * will be accepting a parameter for this function that is our file descriptor.
 * I recommend learning how the ft_putnbr and ft_putchar_fd functions work in
 * order to understand how this function works. The explanation of the inner
 * workings of this function are the same as I gave for ft_putnbr.*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	if (n < 0 && n != -2147483648)
	{
		ft_putchar_fd('-', fd);
		n = n * -1;
	}
	if (n <= 9 && n >= 0)
		ft_putchar_fd(n + 48, fd);
	else if (n > 0)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + 48, fd);
	}
}
