/* ************************************************************************** */
/*                                                                            */
/* Assignment name	: rotone                              					  */
/* Expected files	: rotone.c												  */
/* Allowed functions: write													  */
/*																			  */
/* -------------------------------------------------------------------------- */
/*																			  */
/* Write a program that takes a string and displays it, replacing each of its */
/* letters by the next one in alphabetical order.							  */
/*												 							  */
/* 'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.			  */
/*																			  */
/* The output will be followed by a \n.										  */
/*																			  */
/* If the number of arguments is not 1, the program displays \n.			  */
/* 																			  */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = (str[i] - 'A' + 1) % 26 + 'A';
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = (str[i] - 'a' + 1) % 26 + 'a';
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rotone(argv[1]);
	ft_putchar('\n');
	return (0);
}
