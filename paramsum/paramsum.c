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

void	ft_putnbr(int nb)
{

}

int	main(int argc, char *argv[])
{
	ft_putnbr(argc);
	return (0);
}
