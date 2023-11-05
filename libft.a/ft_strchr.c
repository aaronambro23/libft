#include "libft.h"

char *ft_strchr(const char *str, int c)
{
    int i;
    i = 0;

    while (str[i])
    {
        if (ft_isalpha(str[i]))
        {
            return(&str[i]);
        }
        else
        {
            i++;
        }
    }
    return (0);
}
