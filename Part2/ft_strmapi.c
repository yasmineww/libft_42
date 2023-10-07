#include <stdlib.h>
#include <stdio.h>

int	ft_strsize(char *s)
{
	int	size;

	size = 0;
	while (*s)
	{
		size++;
		s++;
	}
	return (size);
}

char	*ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	char	*s2;
	int 	i;

	i = 0;
	s2 = (char *) malloc (ft_strsize(s + 1));
	if (!s2)
		return (0);
	while (s[i])
	{
		s2 = f(i, s[i]);
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

char	f(unsigned int i, char s)
{

	s[i] = 'a';
	return (s);
}

int	main (void)
{
	char	s[] = "Hello";
	char	*s2;

	s2 = ft_strmapi(s, f);
	printf("%s", s2);
	return (0);

}
