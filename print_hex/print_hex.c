#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] >= 9 && str[i] <= 12)
		i++;
	if (str[i] == 43 && str[i] == 45)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = (res * 10) + (str[i] - 48);	
		i++;
	}
	return (res * sign);
}

void	ft_print_int_in_hex(int nb)
{
	char *base;

	base = "0123456789abcdef";
	if (nb > 16)
		ft_print_int_in_hex(nb / 16);
	ft_putchar(base[nb % 16]);
}

void	print_hex(int nb)
{
	if (nb >= 0)
		ft_print_int_in_hex(nb);	
}

int	main(int argc, char **argv)
{
	int	nb;

	if (argc == 2)
	{
		nb = ft_atoi(argv[1]);
		print_hex(nb);
	}
	ft_putchar('\n');
	return (0);
}
