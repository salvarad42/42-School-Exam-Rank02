/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sr.lilitha <sr.lilitha@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by ing and dis       #+#    #+#             */
/*   Updated: 2023/05/04 08:16:41 by sr.lilitha       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*   The output will be followed by a newline.                                */
/*                                                                            */
/*   If the number of arguments is not 1, the program displays a newline.     */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rot_13(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = (str[i] - 'A' + 13) % 26 + 'A';
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = (str[i] - 'a' + 13) % 26 + 'a';
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rot_13(argv[1]);
	ft_putchar('\n');
	return (0);
}
