#include <stdio.h>

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *destt = (unsigned char *)dest;
	unsigned const char *srcc =(unsigned const char *) src;
	size_t i;

	i = 0;
	while (i < n)
	{
		destt[i] = srcc [i];
		if (destt[i] == c)
			break;
		i++;
	}
	return (dest);
}

int	main (void)
{
	char src[] = "Yasmine";
	char dest[20] = "Mouad and aboubakr";

	ft_memccpy(dest, src, 'm', 6);
	printf("%s", dest);
	return (0);
}
