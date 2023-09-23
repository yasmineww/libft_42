#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *destt = dest;
	unsigned const char *srcc = src;
	size_t i;

	i = 0;
	while (i < n)
	{
		destt[i] = srcc[i];
		i++;
	}
	return (dest);
}

int	main (void)
{
	int arr1[] = {1,2,3,4};
	int arr2[4];
	int i;

	i = 0;
	ft_memcpy(arr2, arr1,sizeof(int)*4);
	while(i < 4)
	{
	//	printf("%d", arr1[i]);
		printf("%d", arr2[i]);
		i++;
	}
	return (0);
}
