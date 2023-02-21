/* ************************************************************************** */
/*                                                                            */
/*  Assignment name  : rev_print                                              */
/*  Expected files   : rev_print.c                                            */
/*  Allowed functions: write                                                  */
/*  ------------------------------------------------------------------------  */
/*                                                                            */
/*  Write a program that takes a string, and displays the string in reverse   */
/*  followed by a newline.                                                    */
/*                                                                            */
/*  If the number of parameters is not 1, the program displays a newline.     */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	rev_print(char *str)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (i >= 0)
	{
		ft_putchar(str[i]);
		i--;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rev_print(argv[1]);
	ft_putchar('\n');
	return (0);
}
