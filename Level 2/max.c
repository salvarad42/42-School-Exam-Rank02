/* ************************************************************************** */
/*																			  */
/*	Assignment name  : max													  */
/*	Expected files   : max.c												  */
/*	Allowed functions: none													  */
/*	------------------------------------------------------------------------- */
/*																			  */
/*	Write the following function:											  */
/*																			  */
/*	int		max(int* tab, unsigned int len);								  */
/*																			  */
/*	The first parameter is an array of int, the second is the number of 	  */
/*	elements in the array.													  */
/*																			  */
/*	The function returns the largest number found in the array.				  */
/*																			  */
/*	If the array is empty, the function returns 0.							  */
/*																			  */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	int	i;
	int	max;

	i = 0;
	max = tab[i];
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}
