/* ************************************************************************** */
/*  																		  */
/*  Assignment name	 : alpha_mirror											  */
/*	Expected files	 : alpha_mirror.c										  */
/*	Allowed functions: write												  */
/*	------------------------------------------------------------------------- */
/*																			  */
/*	Write a program called alpha_mirror that takes a string and displays this */
/*	string after replacing each alphabetical character by the character, 	  */
/*	followed by a newline.													  */
/*																			  */
/*	'a' becomes 'z', 'Z' becomes 'A'										  */
/*	'd' becomes 'w', 'M' becomes 'N'										  */
/*																			  */
/*	and so on.																  */
/*																			  */
/*	Case is not changed.													  */
/*                                                                            */
/*  If the number of parameters is not 1, or if there are no words, simply    */
/*  display a newline.                                                        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	*str;

	i = 0;
	str = argv[1];
	if (argc == 2)
	{
		while (str[i])
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = 'Z' - str[i] + 'A';
			else if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = 'z' - str[i] + 'a';
			write (1, &str[i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
