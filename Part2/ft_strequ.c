#include <stdio.h>

int	ft_strequ(char const *s1, char const *s2)
{
	int	i;

	i = 0;
	if (s1[i] == '\0' || s2[i] == '\0')
		return (0);
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}

int	main (void)
{
	char	s1[] = "";
	char	s2[] = "";
	int	res;

	res = ft_strequ(s1, s2);
	printf("%d", res);
	return (0);
}
