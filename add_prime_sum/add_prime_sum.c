#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int i = 0;
	int	sign = 1;
	int res = 0;
	
	while (str[i] >= 9 && str[i] <= 13 || str[i] == 32)
		i++;
	if (str[i] == 43 || str[i] == 45)
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
	int	i = 3;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (i < nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	int	res;
	int	i = 0;
	int	sum = 0;

	if (argc == 2)
	{
		res = ft_atoi(argv[1]);
		while (res > 0 && i <= res)
		{
			if (is_prime(i))
				sum += i;
			printf("i=%d - isprime : %d - total = %d \n", i, is_prime(i), sum);
			i++;
		}
		ft_putnbr(sum);
	}
	else
			ft_putchar('0');
	ft_putchar('\n');
	return (0);
}
