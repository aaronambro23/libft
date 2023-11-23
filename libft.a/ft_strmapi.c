/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:37:42 by aaambros          #+#    #+#             */
/*   Updated: 2023/11/19 13:57:06 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	char			*result;
	unsigned int	i;
	char			mapped_char;

	if (s == NULL || f == NULL)
	{
		return (NULL);
	}
	len = ft_strlen(s);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		mapped_char = f(i, s[i]);
		result[i] = mapped_char;
		i++;
	}
	result[len] = '\0';
	return (result);
}

// #include "libft.h"
// #include <stdio.h>

// char	mapping_function(unsigned int index, char c)
// {
// 	return (c + 1);
// }

// int	main(void)
// {
// 	const char	*input = "hello";
// 	char		*result;

// 	result = ft_strmapi(input, &mapping_function);
// 	printf("Original: %s\n", input);
// 	printf("Mapped  : %s\n", result);
// 	free(result);
// 	return (0);
// }
