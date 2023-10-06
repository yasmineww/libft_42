#include <stdio.h>

void	ft_striter(char *s, void (*f)(char *))
{
	while (*s)
	{
		f(s);
		s++;
	}
}

void	test(char *s)
{
	if (*s == 'i')
		*s = 'e';
}
int	main (void)
{
	char	str[] = "Hillo";

	ft_striter(str, test);
	printf("%s", str);
	return (0);
}
