#include <stdio.h>

char *ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	i = 0;
	while (src[i] && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	src[] = "Hello";
	char	dest[20];

	ft_strncpy(dest, src, 5);
	printf("%s", dest);
	return (0);
}
