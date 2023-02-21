/* ************************************************************************** */
/*                                                                            */
/*  AssignmAssignment name  : repeat_alpha                                    */
/*  Expected files   : repeat_alpha.c                                         */
/*  Allowed functions: write                                                  */
/*  ------------------------------------------------------------------------  */
/*                                                                            */
/*  Write a program called repeat_alpha that takes a string and display it    */
/*  repeating each alphabetical character as many times as its alphabetical   */
/*  index, followed by a newline.                                             */
/*                                                                            */
/*  'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...            */
/*                                                                            */
/*  Case remains unchanged.                                                   */
/*                                                                            */
/*  If the number of arguments is not 1, just display a newline.              */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	repeat_alpha(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 1;
		if (str[i] >= 'a' && str[i] <= 'z')
			j += str[i] - 'a';
		else if (str[i] >= 'A' && str[i] <= 'Z')
			j += str[i] - 'A';
		while (j > 0)
		{
			ft_putchar(str[i]);
			j--;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	ft_putchar('\n');
	return (0);
}
