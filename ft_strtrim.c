/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 20:37:15 by azamario          #+#    #+#             */
/*   Updated: 2021/06/10 16:32:53 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_charcmp(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	init;
	char	*string;
	size_t	size;

	i = 0;
	if (s1 == 0 || set == 0)
		return (0);
	while (s1[i] != '\0' && ft_charcmp(s1[i], set) == 1)
		i++;
	init = i;
	i = ft_strlen(s1) - 1;
	while (i > 0 && ft_charcmp(s1[i], set) == 1)
		i--;
	if (i > init)
		size = i - init + 1;
	else
		size = 0;
	string = (char *)malloc((size + 1) * sizeof(char));
	if (string != 0)
	{
		if (size == 0)
			string[0] = '\0';
		else
			ft_strlcpy(string, &s1[init], size + 1);
	}
	return (string);
}
