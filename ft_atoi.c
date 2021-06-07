/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 22:36:53 by azamario          #+#    #+#             */
/*   Updated: 2021/06/07 12:50:08 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int o;
	int r;

	i = 0;
	o = 1;
	r = 0;
	while (str[i] == '\f' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\t' || str[i] == '\v' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			o *= -1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		r = (r * 10) + (str[i] - 48);
		i++;
	}
	return (o * r);
}
