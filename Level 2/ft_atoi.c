/* ************************************************************************** */
/*																			  */
/*	Assignment name  : ft_atoi												  */
/*	Expected files   : ft_atoi.c											  */
/*	Allowed functions: None													  */
/*	------------------------------------------------------------------------- */
/*																			  */
/*	Write a function that converts the string argument str to an integer 	  */
/*	(type int) and returns it.												  */
/*																			  */
/*	It works much like the standard atoi(const char *str) function, see the   */
/*	man.																	  */
/*																			  */
/*	Your function must be declared as follows:								  */
/*																			  */
/*	int	ft_atoi(const char *str);											  */
/*																			  */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	num;
	int	sign;

	num = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
			sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + *str - '0';
		str++;
	}
	return (num * sign);
}
