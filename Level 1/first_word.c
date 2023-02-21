/* ************************************************************************** */
/*                                                                            */
/*  Assignment name  : first_word                                             */
/*  Expected files   : first_word.c                                           */
/*  Allowed functions: write                                                  */
/*  ------------------------------------------------------------------------  */
/*                                                                            */
/*  Write a program that takes a string and displays its first word, followed */
/*  by a newline.                                                             */
/*                                                                            */
/*  A word is a section of string delimited by spaces/tabs or by the start/   */
/*  end of the string.                                                        */
/*                                                                            */
/*  If the number of parameters is not 1, or if there are no words, simply    */
/*  display a newline.                                                        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
		{
			ft_putchar(argv[1][i]);
			i++;
		}
	}	
	ft_putchar('\n');
	return (0);
}
