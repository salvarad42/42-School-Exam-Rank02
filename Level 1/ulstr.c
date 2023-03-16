/* ************************************************************************** */
/*																			  */
/* Assignement name	: ulstr													  */
/* Expected files	: ulstr.c												  */
/* Allowed functions: write													  */
/* 																			  */
/* -------------------------------------------------------------------------- */
/*																			  */
/* Write a program that takes a string and reverses the case of all its		  */
/* letters. other characters remain unchanged.								  */
/*																			  */
/* You must display the result followed by a '\n'.							  */
/*																			  */
/* If the number of arguments is not 1, the program displays '\n'.			  */
/*																			  */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ulstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ulstr(argv[1]);
	ft_putchar('\n');
	return (0);
}
