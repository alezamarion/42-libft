/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 17:43:22 by azamario          #+#    #+#             */
/*   Updated: 2021/06/07 13:55:13 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -214783648)
		ft_putstr_fd("-214783648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

/*
void	ft_putnbr(n)
{
	if (n == -2147483648)				//number 2147483648 is largest number an int variable can hold.
		ft_putstr("-2147483648");
	else if (n < 0)						
	{									
		ft_putchar("-");				//if number negative, putchar char -
		ft_putnbr(-n);					//and call putnbr again, w/ same number, but positive
	}
	if (n >= 10)						//if number > 10, function start to breakdown the number recursively
	{									//to each individual digit, where we will then convert it 
		ft_putnbr(n / 10);				//into a character
		ft_putchar(n % 10 + '0');
	}
	else
		ft_putchar(n + '0');		
}
*/