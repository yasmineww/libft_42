//#include <string.h>
#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *destt = (unsigned char *)dest;
	unsigned const char *srcc = (unsigned const char *)src;
	size_t i;

	i = 0;
	if (srcc < destt)
	{
		while (n > 0)
		{
			destt[n - 1] = srcc[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			destt[i] = srcc[i];
			i++;
		}
	}
	return (dest);
}

int	main (void)
{
	char src[] = "hello yasmine";
	char dest[20];

	ft_memmove(dest, src, 5);
	printf("%s", dest);
	return (0);
}
