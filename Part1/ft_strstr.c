#include <stdio.h>
//#include <string.h>

char    *ft_strstr(const char *str, const char *to_find)
{
        int i;
        int j;

        i = 0;
        j = 0;
        while (str[i])
        {
                while (str[i] == to_find[j] && to_find[j] != '\0')
                {
                        if (str[i + 1] != to_find[j + 1] && to_find[j + 1] != '\0')
                                j = 0;
                        else if (str[i + 1] == to_find[j + 1] && to_find[j + 1] != '\0')
                                j++;
                        if (to_find[j + 1] == '\0')
                        {
                                i = i - j + 1;
                                return ((char *) str + i);
                        }
                        i++;
                }
                i++;
        }
        return (0);
}

int     main (void)
{
        char    str[] = "Hello mouad c yasmine and abou how are you";
        char    to_find[] = "abou";
        char    *res;

        res = ft_strstr(str, to_find);
        printf("%s", res);
        return (0);
}
