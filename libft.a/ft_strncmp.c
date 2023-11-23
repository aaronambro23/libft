/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:19:21 by aaambros          #+#    #+#             */
/*   Updated: 2023/11/23 14:47:47 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	while (n > 0 && (*str1 != '\0' || *str2 != '\0'))
	{
		if ((unsigned char)(*str1) != (unsigned char)(*str2))
			return ((int)((unsigned char)(*str1) - (unsigned char)(*str2)));
		str1++;
		str2++;
		n--;
	}
	return (0);
}
