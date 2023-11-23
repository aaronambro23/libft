/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:19:07 by aaambros          #+#    #+#             */
/*   Updated: 2023/11/23 14:48:24 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	while (i < size && dest[i])
	{
		i++;
	}
	while ((i + n + 1) < size && src[n])
	{
		dest[i + n] = src[n];
		n++;
	}
	if (i != size)
	{
		dest[i + n] = '\0';
	}
	return (i + ft_strlen(src));
}
