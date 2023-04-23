#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char *s;
	int	i;
	
	i = 0;
	s = malloc(ft_strlen(src) * sizeof(char *) + 1);
	if (!s)
		return (NULL);
	while (src[i])
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
