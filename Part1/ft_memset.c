#include <stdio.h>
void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *ptr = (unsigned char *)s;
	size_t i;

	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}

int	main (void)
{
	char	str[] = "Hello yasmine";
	ft_memset(str + 6, '*', 7);
	printf("%s", str);
	return (0);
}
