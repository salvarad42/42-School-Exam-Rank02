/* ************************************************************************** */
/*                                                                            */
/*  Assignment name  : fizzbuzz                                               */
/*  Expected files   : fizzbuzz.c                                             */
/*  Allowed functions: write                                                  */
/*  ------------------------------------------------------------------------  */
/*                                                                            */
/*  Write a program that prints the numbers from 1 to 100, each separated by  */
/*  a newline.                                                                */
/*                                                                            */
/*  If the number is a multiple of 3, it prints 'fizz' instead.               */
/*                                                                            */
/*  If the number is a multiple of 5, it prints 'buzz' instead.               */
/*                                                                            */
/*  If the number is both a multiple of 3 and a multiple of 5, it prints      */
/*  'fizzfuzz'  instead.                                                      */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int n)
{
	if (n < 10)
		ft_putchar(n + 48);
	else
	{
		ft_putnbr(n / 10);
		ft_putchar((n % 10) + 48);
	}
}

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			ft_putstr("fizzfuzz");
		else if (i % 3 == 0)
			ft_putstr("fizz");
		else if (i % 5 == 0)
			ft_putstr("fuzz");
		else
			ft_putnbr(i);
		i++;
		ft_putchar('\n');
	}
	return (0);
}
