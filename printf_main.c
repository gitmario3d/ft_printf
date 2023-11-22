/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malena-b <mario3d93@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 09:35:10 by malena-b          #+#    #+#             */
/*   Updated: 2023/11/10 12:23:54 by malena-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	char	*str = "This is a test";
	int		i = -2147483648;
	int		j = -12345;
	char	letter = 'A';
	int		number = 300;
	int 	print_result;

	//Test for %c parameter
	ft_printf("Ho%cla %d %s", letter, number, str);
	HoAla 300 This is a test
	ft_printf("Testing %%c parameter: \n");
	ft_printf(" || ft_printf Return: %d\n", ft_printf("%c", 'A'));
	printf(" || printf Return: %d\n", printf("%c", 'A'));
	ft_printf("\n");
	//Test for %s parameter
	ft_printf("Testing %%s parameter: \n");
	ft_printf(" || ft_printf Return: %d\n", ft_printf("%s", "This is a test"));
	printf(" || printf Return: %d\n", printf("%s", "This is a test"));
	ft_printf("\n");
	//Test for %p parameter
	ft_printf("Testing %%p parameter: \n");
	ft_printf(" || ft_printf Return: %d\n", ft_printf("%p", str));
	printf(" || printf Return: %d\n", printf("%p", str));
	ft_printf("\n");
	//Test for %d parameter
	ft_printf("Testing %%d parameter: \n");
	ft_printf(" || ft_printf Return: %d\n", ft_printf("%d", i));
	printf(" || printf Return: %d\n", printf("%d", i));
	ft_printf("\n");
	//Test for %i parameter
	ft_printf("Testing %%i parameter: \n");
	ft_printf(" || ft_printf Return: %d\n", ft_printf("%i", i));
	printf(" || printf Return: %d\n", printf("%i", i));
	ft_printf("\n");
	//Test for %u parameter
	ft_printf("Testing %%u parameter: \n");
	ft_printf(" || ft_printf Return: %d\n", ft_printf("%u", i));
	printf(" || printf Return: %d\n", printf("%u", i));
	ft_printf("\n");
	//Test for %x parameter
	ft_printf("Testing %%x parameter: \n");
	ft_printf(" || ft_printf Return: %d\n", ft_printf("%x", j));
	printf(" || printf Return: %d\n", printf("%x", j));
	ft_printf("\n");
	//Test for %x parameter
	ft_printf("Testing %%X parameter: \n");
	ft_printf(" || ft_printf Return: %d\n", ft_printf("%X", j));
	printf(" || printf Return: %d\n", printf("%X", j));
	ft_printf("\n");
	//Test for %% parameter
	ft_printf("Testing %% parameter: \n");
	ft_printf(" || ft_printf Return: %d\n", ft_printf("%%"));
	printf(" || printf Return: %d\n", printf("%%"));
	ft_printf("\n");
	return (0);
}
