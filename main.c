
#include <stdio.h>
#include "libft.h"

// ATOI //
void	ft_atoi_like_test(char *str)
{
	int buff;
	int ft_buff;

	buff = atoi(str);
	ft_buff = ft_atoi(str);
	if (buff != ft_buff)
		printf("> KO, invalid int value returned. expected: %d got: %d\n", buff, ft_buff);
	else
		printf("> OK. result: %d\n", ft_buff);
}

void	ft_atoi_unlike_test(char *str, int expected_result)
{
	int ft_buff;

	ft_buff = ft_atoi(str);
	if (ft_buff != expected_result)
		printf("> KO, invalid int value returned expected: %d got: %d\n", expected_result, ft_buff);
	else
		printf("> OK, result: %d\n", ft_buff);
}

void	ft_atoi_test(void)
{
	char *str;

	// quando o comportamento e igual ao de atoi
	str = " \n \t \r \v +1234567asd";
	ft_atoi_like_test(str);
	str = " \n \t\f\r \v -1234b67asd";
	ft_atoi_like_test(str);
	// quando o comportamento e diferente ao de atoi
	str = " \n \t \r \v --+-+-+-2147483648asd";
	ft_atoi_unlike_test(str, -2147483648);
	str = " \n \t\f\r \v -++-+-++1234b67asd";
	ft_atoi_unlike_test(str, -1234);
}

// BZERO //
void	ft_bzero_test(void)
{
    char str[] = "Virei Cadete e agora o bicho vai pegar.";
    printf("\nBefore ft_bzero(): %s\n", str);
  
    // Fill 8 characters starting from str[13] with '.'
    ft_bzero(str + 13, 8*sizeof(char));
  
    printf("After ft_bzero():  %s\n\n", str);
}


int		main(void)
{
	//void	ft_atoi_test();
	void	ft_bzero_test();

	return(0);
}
