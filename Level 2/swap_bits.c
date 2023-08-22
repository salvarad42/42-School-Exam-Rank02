/* ************************************************************************** */
/*																			  */
/*	Assignment name  : swap_bits											  */
/*	Expected files   : swap_bits.c											  */
/*	Allowed functions: none													  */
/*	------------------------------------------------------------------------  */
/*																			  */
/*	Write a function that takes a byte, swaps its halves (like the example)   */
/*	and returns the result.													  */
/*																			  */
/*	Your function must be declared as follows:								  */
/*																			  */
/*	unsigned char	swap_bits(unsigned char octet);							  */
/*																			  */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}
