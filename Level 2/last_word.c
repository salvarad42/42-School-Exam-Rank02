/* ************************************************************************** */
/*																			  */
/*	Assignment name  : last_word											  */
/*	Expected files   : last_word.c											  */
/*	Allowed functions: write												  */
/*	------------------------------------------------------------------------  */
/*																			  */
/*	Write a program that takes a string and displays its last word followed   */
/*	by a \n.																  */
/*																			  */
/*	A word is a section of string delimited by spaces/tabs or by the start/   */
/*	end of the string.														  */
/*																			  */
/*	If the number of parameters is not 1, or there are no words, display a    */
/*	newline.																  */
/*																			  */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 2)
	{
		i = ft_strlen(argv[1]) - 1;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i--;
		while (i > 0 && argv[1][i - 1] != ' ' && argv[1][i - 1] != '\t')
			i--;
		while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
