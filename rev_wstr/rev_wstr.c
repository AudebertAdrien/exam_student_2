#include <stdlib.h>
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

int	len_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

int	ft_count_word(char *str)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (i == 0 || str[i - 1] == 32 || str[i - 1] == 9)
				count++;
		i++;
	}
	return (count);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char *sub_str;
	int	i;
	int	j;

	i = 0;
	j = 0;
	sub_str = malloc((sizeof(char) * len) + 1);
	if (!sub_str)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			sub_str[j] = s[i];
			j++;
		}
		i++;
	}
	sub_str[j] = '\0';
	return (sub_str);
}

int	is_delimiter(char c)
{
	if (c == 32 || c == 9)
		return (1);
	return (0);
}

char	**ft_split(char *s)
{
	char	**tab;
	int 	i;
	int 	j;
	int		size;

	i = 0;
	size = 0;
	if (!s)
		return (NULL);
	tab = malloc((ft_count_word(s) + 1) * sizeof(char *));
	if (!tab)
		return NULL;
	while (s[i])
	{
		j = 0;
		if (i == 0 || is_delimiter(s[i - 1]))
		{
			while (s[i + j] && !is_delimiter(s[i + j]))
				j++;
			tab[size] = ft_substr(s, i, j);
			size++;
		}
		i++;
	}

	tab[size] = NULL;
	return (tab);
}

void	print_reversed_tab(char **tab)
{
	int	len;

	len = len_tab(tab) - 1;
	while (len >= 0)
	{
		ft_putstr(tab[len]);
		if (len != 0)
			ft_putchar(' ');
		len--;
	}
}

int	main(int argc, char **argv)
{
	char	**tab;

	if (argc == 2)
	{
		tab = ft_split(argv[1]);
		print_reversed_tab(tab);
	}
	ft_putchar('\n');	
	return (0);
}
