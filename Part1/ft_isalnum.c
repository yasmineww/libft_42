#include <stdio.h>
#include <ctype.h>

int     ft_isalnum(int  c)
{
        if ((c >= 'A' && c <= 'Z')  || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
                return (1);
        return (0);
}

int     main (void)
{
        int	c = 'Z';

        printf("%d\n", ft_isalnum(c));
        printf("%d", isalnum(c));
        return (0);
}
