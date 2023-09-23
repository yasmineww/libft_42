#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	str_hsseb(const char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + str_hsseb(str + 1));
}

char *ft_strdup(const char *s)
{
	char 	*ptr;
	int	size;
	int	i;

	i = 0;
	size = str_hsseb(s);
	ptr = (char *) malloc (size + 1);
	while (s[i])
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
int main(void)
{
	char str[] = "Hello";
	char *ptr1;
	char *ptr2;
	
	ptr1 = strdup(str);
	ptr2 = ft_strdup(str);
	printf("%s\n", ptr1);
	printf("%s", ptr2);
	return (0);

}
