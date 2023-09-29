#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *str1 = (const unsigned char *)s1;
	const unsigned char *str2 = (const unsigned char *)s2;
	size_t i;

	i = 0;
	while (i < n && (str1[i] == str2[i]))
	{
		i++;
	}
	return (str1[i] - str2[i]);
}

int	main (void)
{
	char	str1[] = "Hello";
	char	str2[] = "Hillo";
	int	res;
	int 	res2;

	res = memcmp(str1, str2, 5);
	res2 = ft_memcmp(str1, str2, 5);
	printf("%d", res);
	printf("%d", res2);
	return (0);
}
