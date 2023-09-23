#include <stdio.h>
//#include <string.h>

char *ft_strstr(const char *str, const char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return ((char *) str + i);
		i++;
		j = 0;
	}
	return (0);
}

int	main (void)
{
	char	str[] = "Hello mouad c yasmine and abou how are you";
	char	to_find[] = "abou";
	char	*res;

	res = ft_strstr(str, to_find);
	printf("%s", res);
	return (0);
}
