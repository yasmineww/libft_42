#include <unistd.h>

void	ft_putendl(char const *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main (void)
{
	char	str[] = "Hello";

	ft_putendl(str);
	return (0);
}
