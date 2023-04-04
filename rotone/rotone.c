#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			if (str[i] + 1 > 90)
				ft_putchar(str[i] - 25);
			else
				ft_putchar(str[i] + 1);
		}
		else if (str[i] >= 97 && str[i] <= 122)
		{
			if (str[i] + 1 > 122)
				ft_putchar(str[i] - 25);
			else
				ft_putchar(str[i] + 1);
		}
		else 
			ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		rotone(argv[1]);
	ft_putchar('\n');
	return (0);
}
