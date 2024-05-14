/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:46:20 by cgombos           #+#    #+#             */
/*   Updated: 2024/05/14 19:04:12 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*str1;
	const unsigned char	*str2;
	size_t				i;

	str1 = (unsigned char *) s1;
	str2 = (const unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
int main()
{
	char *str1 = "Helloo";
	char *str2 = "Hello";
	size_t n = 13;
	int expected = 0;
	int result = ft_memcmp(str1, str2, n);
	printf("Test: Expected: %d, Result: %d\n", expected, result);
	return 0;
}
*/