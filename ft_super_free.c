/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_super_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 01:24:30 by azamario          #+#    #+#             */
/*   Updated: 2021/11/10 01:26:12 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_super_free(void **ptr)
{
	if (*ptr)
	{
		free(*ptr);
		*ptr = NULL;
	}
}
