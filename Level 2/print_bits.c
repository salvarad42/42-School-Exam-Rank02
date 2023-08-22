/* ************************************************************************** */
/*																			  */
/*	Assignment name  : print_bits											  */
/*	Expected files   : print_bits.c											  */
/*	Allowed functions: write												  */
/*	------------------------------------------------------------------------- */
/*																			  */
/*	Write a function that takes a byte, and prints it in binary WITHOUT A 	  */
/*	NEWLINE AT THE END.														  */
/*																			  */
/*	Your function must be declared as follows:								  */
/*																			  */
/*	void	print_bits(unsigned char octet);								  */
/*																			  */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int				i;
	unsigned char	bit;

	i = 8;
	while (i)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
		i--;
	}
}
