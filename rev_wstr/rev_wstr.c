#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_substr(char &

char	*rev_wstr(char *str)
{
	int	len;
	int i;

	i = 0;
	len = ft_strlen(str) - 1;
	while (len > 0)
	{
		if (str[len] == 32 || str[len] == 9)
			ft_substr(str[len], i);	
		i++;
		len--;
	}
}

int	main(int argc, char **argv)
{
	char	*ptr;

	if (argc == 2)
		ptr = rev_wstr(argv[1]);
	free(ptr);
	ft_putchar('\n');	
	return (0);
}
