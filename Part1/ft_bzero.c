#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr = (unsigned char *)s;
	size_t	i;

	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}
int main (void)
{
	/*int arr[] = {1,2,3,4};

	int i;

	i = 0;
	ft_bzero(arr, sizeof(int) * 4);
	while (i < 4)
	{
		printf("%d", arr[i]);
		i++;
	}
	return (0);*/
	char	str[] = "Hello";
	ft_bzero(str + 1, 4);
	printf("%s", str);
	return (0);
}
