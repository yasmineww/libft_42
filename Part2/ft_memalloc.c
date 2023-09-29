#include <stdlib.h>
#include <stdio.h>

void	*ft_memalloc(size_t size)
{
	void	*str;

	str = malloc (size);
	unsigned char	*ptr = (unsigned char *)str;

	if (!str)
		return (NULL);
	while (*ptr)
	{
		*ptr = 0;
		ptr++;
	}
	return (str);
}

int	main (void)
{
	char	*str;

	str = ft_memalloc(5);
	printf("%s", str);
	return (0);
}
