/* ************************************************************************** */
/*																			  */
/*	Assignment name  : reverse_bits											  */
/*	Expected files   : reverse_bits.c										  */
/*	Allowed functions: none													  */
/*	------------------------------------------------------------------------  */
/*																			  */
/*	Write a function that takes a byte, reverses it, bit by bit (like the	  */
/*	example) and returns the result.										  */
/*																			  */
/*	Your function must be declared as follows:								  */
/*																			  */
/*	unsigned char	reverse_bits(unsigned char octet);						  */
/*																			  */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	int				i;
	unsigned char	res;

	i = 8;
	res = 0;
	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet /= 2;
		i--;
	}
	return (res);
}
