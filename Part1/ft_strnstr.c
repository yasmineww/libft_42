#include <stdio.h>

char *ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] && i < len)
	{
		while ((i + j) < len && str[i + j] == to_find[j] && to_find[j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return ((char *) str + i);
		i++;
	}
	return (0);
}

int	 main (void)
{
	char    str[] = "Hello mouad c yasmine and abou how are you";
        char    to_find[] = "abou";
        char    *res;

        res = ft_strnstr(str, to_find, 40);
        printf("%s", res);
        return (0);
}
