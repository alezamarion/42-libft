/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 21:24:05 by azamario          #+#    #+#             */
/*   Updated: 2021/06/07 13:49:10 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_len(int num)
{
	size_t len;
													// se for menor que zero, len começa com 1
	len = (num <= 0)? 1 : 0;						
	while (num != 0)								// 67580 / 10 = 6758 len 1
	{												// 6758  / 10 = 676	 len 2							
		num = num / 10;								// 675   / 10 = 67   len 3							
		len++;										// 67    / 10 = 6    len 4	
	}												// 6     / 10 = 0    len 5	
	return (len);									// num = 0: acabou o while
}

int		ft_to_positive(int num)
{
	return( (num < 0 ? -num : num));
}


char	*ft_itoa(int n)
{
	int sign;
	int len;
	char *result;

	sign = (n < 0) ? -1 : 1;							// 1 - armazenar o sinal
	len = ft_len(n);
	result = (char *)malloc(sizeof(char) * len + 1);	// 2 - alocar memória para a array			
	if (result == NULL)									//     adicionar + 1 para o '\0'
		return (0);
	result[len] = '\0';									// 3 - popular a array de traz pra frente
	len--;												//     colocar o byte nulo no final
	while (len >= 0)								
	{									
		result[len] = '0' + ft_to_positive(n % 10);		// 4 - uso % para obter o dígito final do número
		n = ft_to_positive(n / 10);						// 5 - uso / para gerar o novo número
		len--;					
	}
	if (sign == -1)										// 6 - coloco de volta o sinal de negativo
		result[0] = '-';								//	   haverá um byte a mais alocado para isso
	return (result);
}

	/*	
														  posição
											 			0 1 2 3 4
					len = 4		-675 + \0	result[6] = - 6 7 5 \0
																			           
								
	Tarefa: transformar sequência de INT em CHAR
	
	Basicamente: colocar os números dentro de uma array

	Como obter os componentes da array: utilizando % e /

	Ex: número 67580	-> 67580 % 10 = 0 && 67580 / 10 = 6758
						-> 6758  % 10 = 8 && 6758  / 10 = 675
						-> 675   % 10 = 5 && 675   / 10 = 67
						-> 67    % 10 = 7 && 67    / 10 = 6
						-> 6     % 10 = 6 && 6     / 10 = 0				

	Eu obtenho o número de traz pra fente: vou popular a array de tras pra frente
	*/
