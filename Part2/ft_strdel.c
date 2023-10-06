#include <stdlib.h>
#include <stdio.h>

void	ft_strdel(char **as)
{
	if(*as && as)
	{
		free(*as);
		*as = NULL;
	}
}

int 	main (void)
{
	char	*str;
	
	str = (char *) malloc (5);
	ft_strdel(&str);
	if (!str)
		printf("Success");
	else
		printf("Failure");
	return (0);

}
