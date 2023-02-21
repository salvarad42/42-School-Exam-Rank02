#include <stdio.h>

void	ft_putstr(char *str);
char	*ft_strcpy(char *s1, char *s2);
int		ft_strlen(char *str);
void	ft_swap(int *a, int *b);

int	main(void)
{
	//ft_putstr("hola");
	//char	str[6];
	//printf("%s\n", ft_strcpy(str, "hola"));
	//printf("%u\n", ft_strlen("hola"));
	int	a = 0;
	int	b = 1;
	int *pa = &a;
	int	*pb = &b;
	printf("%u %u \n", a, b);
	ft_swap(pa, pb);
	printf("%u %u \n", a, b);
	return (0);
}
