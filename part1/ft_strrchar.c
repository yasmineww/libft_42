#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *s, int c)
{
	int i;
	char *ptr = (char *)s;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			ptr = ptr + i;
		}
		i++;

	}
	if (ptr == s && s[0] != c)
		return (0);
	return (ptr - 1);
}

int main(void)
{
	char	str[] = "muad dd";
	char	harf = 'o';
	char	*res;
	char	*res2;

	res = strrchr(str, harf);
	res2 = ft_strrchr(str, harf);
	printf("%s\n", res);
	printf("%s", res2);
	return (0);
}
