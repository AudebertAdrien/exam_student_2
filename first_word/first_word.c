/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 07:58:32 by aaudeber          #+#    #+#             */
/*   Updated: 2023/03/21 11:09:45 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	first_word(char *str)
{
	int	i;

	i = 0;
	while (str[i] == 32 || str[i] == 9) 
		i++;
	while (str[i] && str[i] != 32 && str[i] != 9) 
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		first_word(argv[1]);
	ft_putchar('\n');
	return (0);
}
