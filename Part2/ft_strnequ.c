#include <stdio.h>

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (*s1 == '\0' || *s2 == '\0')
		return (0);
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if(s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}

int	main (void)
{
	char	s1[] = "Heylo";
	char	s2[] = "Hello";
	size_t	n = 2;
	int	res;

	res = ft_strnequ(s1, s2, n);
	printf("%d", res);
	return (0);
}
