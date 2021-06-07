/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 20:37:15 by azamario          #+#    #+#             */
/*   Updated: 2021/06/07 13:44:26 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_charcmp(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;		
	}
	return (0);	
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t 	i;
	size_t 	len;
	size_t 	begin;
	size_t 	end;

	if (!s1 || !set)
		return (0);
	i = 0;
	while (s1[i] && ft_charcmp(s1[i], set))
		i++;
	begin = i;									//achar o char do começo
	i = ft_strlen(s1) - 1;
	while (i && ft_charcmp(s1[i], set))			//achar o char do final
		i--;
	end = i;
	len = end >= begin ? end - begin + 2 : 0;
	if (!(trim = (char *)malloc(len)))			//alocar memória para o resultado
		return (0);
	ft_strlcpy(trim, &s1[begin], len);
	return (trim);	
}
