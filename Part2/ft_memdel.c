#include <stdlib.h>
#include <stdio.h>

void	ft_memdel(void **ap)
{
	if(*ap && ap)
	{
		free(*ap);
		*ap = NULL;
	}
}

int	main (void)
{
	void	*str;
	
	str = malloc (5);
	if(str)
		printf("Success\n");
	else
		printf("Failure\n");
	ft_memdel(&str);
	if(!str)
		printf("Success\n");
	else
		printf("Failure\n");
	return (0);
}
