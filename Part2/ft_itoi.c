#include <stdlib.h>
#include <stdio.h>

//converts int to str

int	sizen(int n)
{
	int i;

	i = 0;
	if (n < 0)
		i = 1;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int size;
	int i;
	int rest;
	
	rest = 0;
	i = 0;
	size = sizen(n);
	str = (char *) malloc (size + 1);
	if (!str)
		return (0);
	str[size] = '\0';
	if (n < 0)
	{
		str[i] = '-';
		n = n * -1;
	}
	if (n == 0)
		str[i] = '0';
	while (n != 0)
	{
		rest = n % 10;
		n = n / 10;
		str[size - 1] = rest + '0';
		size--;
	}
	return (str);
}

int	main (void)
{
	printf("%s", ft_itoa(123));
	return (0);
}
