/* ************************************************************************** */
/*																			  */
/*	Assignment name  : do_op												  */
/*	Expected files   : *.c, *.h												  */
/*	Allowed functions: atoi, printf, write									  */
/*	------------------------------------------------------------------------- */
/* 																			  */
/*	Write a program that takes three strings:								  */
/*	- The first and the third one are representations of base-10 signed inte- */
/*	  gers that fit in an int.												  */
/*	- The second one is an arithmetic operator chosen from: + - * / %		  */
/*																			  */
/*	The program must display the result ofv t6ds,.tsggvyvygvyås8ygtwygyvy hytyhhe requested arithmetic operation,*/
/*	followed by a newline. If the number of parameters is not 3, the program  */
/*	just displays a newline.												  */
/*																			  */
/*	You can assume the string have no mistakes or extraneous characters. Nega-*/
/*	tive numbers, in input or output, will have one and only one leading '-'. */
/*	The result of the operation fits in an int.								  */
/*																			  */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][0] == '+')
			printf("%d", atoi(argv[1]) + atoi(argv[3]));
		if (argv[2][0] == '-')
			printf("%d", atoi(argv[1]) - atoi(argv[3]));
		if (argv[2][0] == '*')
			printf("%d", atoi(argv[1]) * atoi(argv[3]));
		if (argv[2][0] == '/')
			printf("%d", atoi(argv[1]) / atoi(argv[3]));
		if (argv[2][0] == '%')
			printf("%d", atoi(argv[1]) % atoi(argv[3]));
	}
	printf("\n");
	return (0);
}
