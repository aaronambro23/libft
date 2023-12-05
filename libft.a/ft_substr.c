/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:49:40 by aaambros          #+#    #+#             */
/*   Updated: 2023/11/29 17:27:37 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}


/*
** Function: ft_substr
** --------------------
** Returns a substring from the string 's'. The substring begins at index 'start'
** and is of maximum size 'len'.
**
** s: the string from which to create the substring.
** start: the index in string 's' where the substring starts.
** len: the maximum length of the substring.
**
** returns: the newly created substring. NULL if the string 's' is NULL or if memory allocation fails.
*/
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;  // iterator for the loop
	char	*str;  // the substring to be returned

	// if the string is NULL, return NULL
	if (!s)
		return (NULL);
	if (start > ft_strlen(s)) 	// if the start index is greater than the length of the string, return an empty string
		return (ft_strdup(""));
	if (len > ft_strlen(s + start)) 	// if the length of the substring is greater than the length of the string starting from 'start', adjust 'len'
		len = ft_strlen(s + start);
	str = ft_calloc(len + 1, sizeof(char)); 
	if (!str) 	// if memory allocation fails, return NULL
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i]; 	// copy 'len' characters from 's' starting from 'start' to 'str'
		i++;
	}
	return (str); 	// return the substring
}
