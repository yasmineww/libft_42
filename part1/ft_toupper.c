#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

int	main (void)
{
	int	c = 'a';

	printf("%c", toupper(c));
	printf("%c", ft_toupper(c));
	return (0);
}

