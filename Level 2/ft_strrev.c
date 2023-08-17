/* ************************************************************************** */
/*																			  */
/*	Assignment name  : ft_strrev											  */
/*	Expected files   : ft_strrev.c											  */
/*	Allowed functions:	none												  */
/*	------------------------------------------------------------------------- */
/*																			  */
/*	Write a function that reverses (in-place) a string.						  */
/*																			  */
/*	It must return its parameter.											  */
/*																			  */
/*	Your function must be declared as follows:								  */
/*																			  */
/*	char    *ft_strrev(char *str);											  */
/*																			  */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		len;
	int		i;
	char	aux;

	len = ft_strlen(str);
	i = 0;
	while (i < len / 2)
	{
		aux = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = aux;
		i++;
	}
	return (str);
}
