#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;

    i = 0;

    if (!dest)
        return(NULL);
    
    if (dest != src)
    {
        while (i < n)
        {
            (unsigned char *)dest[i] = (unisgned char *)src[i];
            i++;
        }
    }
    return(dest);
}
