#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_uppercase(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

void	camel_to_snake(char *str)
{
	int 	i;
	int 	len;

	i = 0;
	len = ft_strlen(str);
	while (i < len)
	{
		if (i != 0 && is_uppercase(str[i]))
		{
			ft_putchar(95);
			ft_putchar(str[i] + 32);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		camel_to_snake(argv[1]);
	ft_putchar('\n');
	return (0);
}
