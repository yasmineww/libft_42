#include <stdio.h>

int	str_hsseb(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + str_hsseb( str + 1));
}

char *ft_strncat(char *dest, const char *src, size_t n)
{
	size_t 	i;
	int	size;

	i = 0;
	size = str_hsseb(dest);
	while (src [i] && i < n)
	{
		dest[size] = src[i];
		i++;
		size++;
	}
	dest[size] = '\0';
	return (dest);
}

int	main (void)
{
	char	src[] = "World";
	char	dest[20] = "Hello ";

	ft_strncat(dest, src, 4);
	printf("%s", dest);
	return(0);
}
