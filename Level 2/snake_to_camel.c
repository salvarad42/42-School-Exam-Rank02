/* ************************************************************************** */
/*																			  */
/*	Assignment name  : snake_to_camel										  */
/*	Expected files   : snake_to_camel.c										  */
/*	Allowed functions: malloc, free, realloc, write							  */
/*	------------------------------------------------------------------------  */
/*																			  */
/*	Write a program that takes a single string in snake_case format and		  */
/*	converts it into a string in lowerCamelCase format.						  */
/*																			  */
/*	A snake_case string is a string where each word is in lower case, separa- */
/*	ted by an underscore "_".												  */
/*																			  */
/*	A lowerCamelCase string is a string where each word begins with a capital */
/*	letter except for the first one.										  */
/*																			  */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == '_')
			{
				i++;
				argv[1][i] -= 32;
			}
			write (1, &argv[1][i], 1);
			i++;
		}
	}
	return (0);
}
