#include <stdio.h>
#include <ctype.h>

int     ft_tolower(int c)
{
        if (c >= 'A' && c <= 'Z')
                c = c + 32;
        return (c);
}

int     main (void)
{
        int     c = 'A';

        printf("%c\n", tolower(c));
        printf("%c", ft_tolower(c));
        return (0);
}
