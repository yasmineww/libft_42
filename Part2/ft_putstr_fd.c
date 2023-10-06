#include <unistd.h>

void ft_putstr_fd(char const *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}

int	main (void)
{
	char	s[] = "Hello";
	int 	fd = 1;
	
	ft_putstr_fd(s, fd);
	return (0);
}
