/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:46:55 by aaudeber          #+#    #+#             */
/*   Updated: 2023/03/21 13:53:45 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rev_print(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	i -= 1;
	while (str[i])
	{
		write(1, &str[i], 1);
		i--;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		rev_print(argv[1]);
	write(1, "\n", 1);
	return (0);
}
