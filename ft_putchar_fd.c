/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 13:47:22 by azamario          #+#    #+#             */
/*   Updated: 2021/11/10 01:22:17 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters 
#1. The character to output.
#2. The file descriptor on which to write.

External functs
write

Description 
Outputs the character ’c’ to the given file descriptor or we use 0, 1, or 2, 
to refer to the standard input, standard output, or standard error, respectively.

Rather than having the first parameter of write be a 1 for the standard output we take
ft_putchar's int fd parameter and use it as the first parameter for write.
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
