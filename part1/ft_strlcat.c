#include <stdio.h>

int str_hsseb(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + str_hsseb(str + 1));
}

int strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = str_hsseb(dst);
	j = 0;
	if (size <= i)
		return (size + str_hsseb((char *)src));
	while (src[j] && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (i + str_hsseb((char *)src));
}
int	main(void)
{
	char	src[] = "world";
	char	dest[20] = "Hello ";
	int	res;

	res = strlcat(dest, src, 7);
	printf("%d", res);
	return(0);
}
