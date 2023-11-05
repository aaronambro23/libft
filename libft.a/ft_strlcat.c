#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t j;
    size_t dest_length;
    size_t src_length;

    src_length = ft_strlen(src);
    dest_length = ft_strlen(dest);

    j = dest_length;
    i = 0;

    if ((dest_length < size - 1) && (size > 0))
    {
        while (src[i] && dest_length + i < size - 1)
        {
            dest[j] = src[i];
            i++;
            j++;
        }
        dest[j] = 0;
    }
    return (dest_length + src_length);
}

// #include <stdio.h>

// int	main(void)
// {
	// char arr1[] = " is better than tudor at fifa";
	// char arr2[] = "Aaron";
	// printf("Initial arr2: %s\n", arr2);

	// unsigned int result = ft_strlcat(arr2, arr1, 10);
	// printf("Concatenated arr2: %s\n", arr2);
	// printf("Result: %u\n", result);

	// return (0);
// }