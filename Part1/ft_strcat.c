#include <stdio.h>

int	str_hsseb(char	*str)
{
	if(*str == '\0')
		return(0);
	return (1 + str_hsseb(str + 1));
}
char *ft_strcat(char *dest, const char *src)
{
	int	i;
	int	size;

	i = 0;
	size = str_hsseb(dest);
	while (src[i])
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
	
	ft_strcat(dest, src);
	printf("%s", dest);
	return (0);
}
