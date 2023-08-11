/* ************************************************************************** */
/*																			  */
/*	Assignment name  : ft_strdup											  */
/*	Expected files   : ft_strdup.c 											  */
/*	Allowed functions: malloc												  */
/*	------------------------------------------------------------------------  */
/*																			  */
/*	Reproduce the behavior of the function strdup (man strdup).				  */
/*																			  */
/*	Your function must be declared as follows:								  */
/*																			  */
/*	char    *ft_strdup(char *src);											  */
/*																			  */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*new_str;

	new_str = (char *) malloc(ft_strlen(src) * sizeof(char) + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (src[i])
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
