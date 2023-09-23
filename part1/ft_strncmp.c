#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		break;
	}
	return (s1[i] - s2[i]);
}

int	main (void)
{
        char    *s1 = "Hello";
        char    *s2 = "Hillo";

        printf("%d",strncmp(s1, s2, 5));
        printf("%d",ft_strncmp(s1, s2, 5));
        return (0);
}
