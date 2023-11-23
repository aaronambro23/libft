/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 14:00:40 by aaambros          #+#    #+#             */
/*   Updated: 2023/11/19 15:19:43 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (s == NULL || f == NULL)
	{
		return ;
	}
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>

// void	printIndexAndChar(unsigned int index, char *character)
// {
// 	printf("Index: %u, Character: %c\n", index, *character);
// }

// int	main(void)
// {
// 	char	testString[] = "Hello, World!";

// 	printf("Original String: %s\n", testString);
// 	ft_striteri(testString, printIndexAndChar);
// 	return (0);
// }