#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *) s + i);
		i++;
	}
	return(0);
}

int main (void)
{
	char	str[] = "mouad";
	char	c = 'o';
	char	*res;

	res = ft_strchr(str, c);
	printf("%s", res);
	return (0);
}
