#include <stdio.h>
//#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str = (const unsigned char *)s;
	size_t i;

	i = 0;
	while (i < n)
	{
		if (str[i] == c)
			return((void *)s + i);
		i++;
	}
	return (NULL);
}

int	main (void)
{
	char	str[] = "yasmine";
	char *ptr;

	ptr = ft_memchr(str, 't', 7);
	printf("%s",ptr);
	return (0);
}
