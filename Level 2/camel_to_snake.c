/* ************************************************************************** */
/*																			  */
/*	Assignment name  : camel_to_snake										  */
/*	Expected files   : camel_to_snake.c										  */
/*	Allowed functions: malloc, realloc, write								  */
/*	------------------------------------------------------------------------- */
/*																			  */
/*	Write a program that takes a single string in lowerCamelCase format and   */
/*	converts it into a string in snake_case format.							  */
/*																			  */
/*	A lowerCamelCase string is a string where each word begins with a capital */
/*	letter except for the first one.										  */
/*																			  */
/*	A snake_case string is a string where each word is in lower case, separa- */
/*	ted by an underscore "_".												  */
/*								  											  */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;
	int		i;

	i = 0;
	str = argv[1];
	if (argc == 2)
	{
		while (str[i])
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] += 32;
				write (1, "_", 1);
			}
			write (1, &str[i], 1);
			i++;
		}
	}
	return (0);
}
