#include "libft.h"

int strncmp(const char *str1, const char *str2, size_t n)
{
    int i;
    i = 0;

    while (str1[i] != '\0' && str1[i] == str2[i] && n > 0)
    {
        i++;
        n--;
    }
    if (n == 0)
        return(0);
    return (*(unsigned char *)str1 - *(unsigned char *)str2);
}
