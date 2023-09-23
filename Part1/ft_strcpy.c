#include <stdio.h>

char *ft_strcpy(char *dest, const char *src)
{
	int i;

	i = 0;
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}
int	 main (void)
{
	char src[] = "Hello";
	char dest[20];

	ft_strcpy(dest, src);
	printf("%s", dest);
	return(0);
}
