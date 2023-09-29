#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c)
{
        if (c >= 0 && c <= 127)
                return (1);
        return (0);
}

int     main (void)
{
        int	c = 300;

        printf("%d\n", ft_isascii(c));
        printf("%d", isascii(c));
        return (0);
}
