#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

void	ft_putnbr(int nb)
{
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + 48);
}

int	is_prime(int nb)
{
	int i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	add_prime_sum(char *str)
{
	int	nb;
	int i;
	int	sum;

	i = 0;
	sum = 0;
	nb = ft_atoi(str);
	while (i <= nb)
	{
		if(is_prime(i))
			sum += i;
		i++;
	}
	ft_putnbr(sum);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		add_prime_sum(argv[1]);
	else
		ft_putchar('0');
	ft_putchar('\n');
	return (0);
}
