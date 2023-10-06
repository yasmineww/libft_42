#include <stdlib.h>
#include <stdio.h>

char	*ft_strnew(size_t size)
{
	char	*ptr;

	ptr = (char *) malloc (size);
	if (!ptr)
		return (NULL);
	while (size > 0)
	{
		*ptr = '\0';
		size--;
		ptr++;
	}
	return (ptr);
}

int	main (void)
{
	char	*str;
	
	str = ft_strnew(4);
	if(*str == '\0')
		printf("Succes");
	else
		printf("Failure");
	return (0);
}
