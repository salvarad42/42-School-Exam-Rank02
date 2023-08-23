/* ************************************************************************** */
/*																			  */
/*	Assignment name  : union												  */
/*	Expected files   : union.c												  */
/*	Allowed functions: write												  */
/*	------------------------------------------------------------------------  */
/*																			  */
/*	Write a program that takes two strings and displays, without doubles, the */
/*	characters that appear in either one of the strings.					  */
/*																			  */
/*	The display will be in the order characters appear in the command line,   */
/*	and will be followed by a \n.											  */
/*																			  */
/*	If the number of arguments is not 2, the program displays \n.			  */
/*																			  */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_double(char *str, char c, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
			i++;
		j = 0;
		while (argv[2][j])
		{
			argv[1][i] = argv[2][j];
			i++;
			j++;
		}
		i = 0;
		while (argv[1][i])
		{
			if (!ft_is_double(argv[1], argv[1][i], i))
				write (1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
