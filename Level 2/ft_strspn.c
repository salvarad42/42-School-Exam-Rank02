/* ************************************************************************** */
/*																			  */
/*	Assignment name	 : ft_strspn											  */
/*	Expected files	 : ft_strspn.c											  */
/*	Allowed functions: None													  */
/* -------------------------------------------------------------------------- */
/*																			  */
/*	Reproduce exactly the behavior of the strspn function  (man strspn).	  */
/*																			  */
/*	The function should be prototyped as follows:							  */
/*																			  */
/*	size_t	ft_strspn(const char *s, const char *accept);					  */
/*																			  */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (s[i] == c)
		return ((char *) &s[i]);
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (!ft_strchr(accept, s[i]))
			return (i);
		i++;
	}
	return (i);
}
