#include <stdlib.h>
#include <stdio.h>

int	ft_strsize(char const *s)
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

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*s2;
	int	i;

	i = 0;
	s2 = (char *) malloc (ft_strsize(s +1));// if u use char const *s2
						// you get an error assignment 
						// of read-only location indicating
						// the program tries to update/modify 
						// the value of a constant
	if (!s2)
		return (0);
	while (s[i])
	{
		//s2 = f(s);i get an error when i try working with pointers
		//instead f indexing
		s2[i] = f(s[i]);
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

char	f(char s)
{
	s = 'a';
	return (s);
}

int	main (void)
{
	char	s[] = "Hello";
	char	*s2;

	s2 = ft_strmap(s, f);
	printf("%s", s2);
	return (0);
}
