#include <stdio.h>
#include <string.h>

int ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			break;
	}
	return (s1[i] - s2[i]);
}

int	main (void)
{
	char	*s1 = "Hello";
	char	*s2 = "Hillo";

	printf("%d",strcmp(s1, s2));
	printf("%d",ft_strcmp(s1, s2));
	return (0);
}
