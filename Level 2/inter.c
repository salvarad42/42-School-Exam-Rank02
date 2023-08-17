/* ************************************************************************** */
/*																			  */
/*	Assignment name  : inter												  */
/*	Expected files   : inter.c												  */
/*	Allowed functions: write												  */
/*	------------------------------------------------------------------------  */
/*																			  */
/*	Write a program that takes two strings and displays, without doubles, the */
/*	characters that appear in both strings, in the order they appear in the   */
/*	first one.																  */
/*																			  */
/*	The display will be followed by a \n.									  */
/*																			  */
/*	If the number of arguments is not 2, the program displays \n.			  */
/*																			  */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strnchr(const char *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (s[i] && (i < n || n == -1))
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (!ft_strnchr(argv[1], argv[1][i], i)
				&& ft_strnchr(argv[2], argv[1][i], -1))
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}