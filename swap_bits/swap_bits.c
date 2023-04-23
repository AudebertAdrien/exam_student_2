/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 13:11:27 by aaudeber          #+#    #+#             */
/*   Updated: 2023/04/23 13:16:56 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_bits(char num)
{
		int	i;
		int	mask;

		i = 0;
		mask = 128;
		while (i < 8)
		{
			if (num << i & mask)
				printf("1");
			else
				printf("0");
			i++;
		}
}

unsigned char	swap_bits(unsigned char byte)
{
	print_bits(byte);
	printf("\n");
	return ((byte << 4) | (byte >> 4));
}

int	main(void)
{
	unsigned char x;

	x = swap_bits('A');
	print_bits(x);
	printf("\n");
	return (0);
}
