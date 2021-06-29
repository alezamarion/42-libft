/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 16:02:22 by azamario          #+#    #+#             */
/*   Updated: 2021/06/29 16:23:14 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters 
#1. The string to output.
#2. The file descriptor on which to write.

External functs
write

Description 
Outputs the string ’s’ to the given file descriptor.

Exactly the same as our ft_putstr function except that we are requiring a file descriptor 
in the parameter along with the desired string to be to be written. 
We can also use 0, 1, or 2, to refer to the standard input, standard output, or standard error. 
We use ft_strlen so we know how many bytes will need to be written.
*/


#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
