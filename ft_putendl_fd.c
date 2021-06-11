/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 16:18:10 by azamario          #+#    #+#             */
/*   Updated: 2021/06/09 14:49:37 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters 
#1. The string to output.
#2. The file descriptor on which to write.

External functs
write

Description 
Outputs the string ’s’ to the given file descriptor, followed by a newline.
*/

/*This function writes the string s to the file descriptor fd followed by a
 * '\n' to make a new line. This function is exactly the same as our ft_putendl
 * function except that we take in a parameter for the file descriptor. We will
 * use our ft_putstr_fd and ft_putchar_fd functions to make this function work.
 * Please review ft_putstr_fd and ft_putchar_fd to understand the inner
 * workings of this function.*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
