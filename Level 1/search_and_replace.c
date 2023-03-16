/* ************************************************************************** */
/* 																			  */
/* Assignement name	: search_and_replace									  */
/* Expected files	: search_and_replace.c									  */
/* Allowed functions: write, exit											  */
/*																			  */
/* -------------------------------------------------------------------------- */
/*																			  */
/* Write a program called search_and_replace that takes 3 arguments, the first*/
/* arguments is a string in which to replace a letter (2nd argument) by 	  */
/* another one (3rd argument).												  */
/*																			  */
/* If the number of arguments is not 3, just display a newline.				  */
/*																			  */
/* If the second argument is not contained in the firts one (the string) then */
/* the program simply rewrites the string followed by a newline.			  */
/*																			  */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	search_and_replace(char *str, char a, char b)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == a)
			str[i] = b;
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 4 && !argv[2][1] && !argv[3][1])
		search_and_replace(argv[1], argv[2][0], argv[3][0]);
	ft_putchar('\n');
	return (0);
}
