#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
    int i;
    i = ft_strlen(str) - 1;

    while (i <= 0)
    {
        if (ft_isalpha(str[i]))
        {
            return(&str[i]);
        }
        else
        {
            i--;
        }
    }
    return (0);
}
