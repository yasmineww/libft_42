#include <stdio.h>

void	ft_strclr(char *s)
{
	while (*s)
	{
		*s = '\0';
		s++;
	}
}

int	main (void)
{
	char	s[] = "Hello";

	ft_strclr(s);
	printf("%s", s);
	return (0);
}

