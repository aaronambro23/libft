/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:05:14 by aaambros          #+#    #+#             */
/*   Updated: 2023/11/19 15:26:56 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);
char	*ft_strcpy(char *dest, const char *src);

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, const char *src)
{
	char	*original_dest;

	original_dest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original_dest);
}

char	*ft_strdup(const char *str1)
{
	size_t	len;
	char	*dup_str;
	char	*s;

	s = (char *)str1;
	if (s == NULL)
	{
		return (NULL);
	}
	len = ft_strlen(s) + 1;
	dup_str = (char *)malloc(len);
	if (dup_str != NULL)
	{
		ft_strcpy(dup_str, s);
	}
	return (dup_str);
}

// #include "libft.h"
// #include <stdio.h>

// int	main(void)
// {
// 	const char	*originalString = "Hello, World!";
// 	char		*duplicateString;

// 	duplicateString = ft_strdup(originalString);
// 	if (duplicateString != NULL)
// 	{
// 		printf("Original String: %s\n", originalString);
// 		printf("Duplicate String: %s\n", duplicateString);
// 		free(duplicateString);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed.\n");
// 	}
// 	return (0);
// }