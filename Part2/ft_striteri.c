#include <stdio.h>

void ft_striteri(char *s, void (*f)(unsigned int,char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, s);
		i++;
	}
}

void	f(unsigned int i, char *s)
{
	if (s[i] == 'i')
		s[i] = 'e';
}

int	main (void)
{
	char	s[] = "Hillo";

	ft_striteri(s, f);
	printf("%s", s);
	return (0);
}
