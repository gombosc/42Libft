/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:48:40 by cgombos           #+#    #+#             */
/*   Updated: 2024/05/15 20:37:55 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!dest && !src)
		return (dest);
	if (s < d)
	{
		while (n--)
			d[n] = s[n];
	}
	else
	{
		while (n--)
			*d++ = *s++;
	}
	return (dest);
}
/*
int main(void)
{
	char src[] = "123456789";
	char dest[] = "abcdefghi";
	char *src2 = src;
	char *dest2 = dest;
	size_t len = 5;

	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	ft_memmove(dest, src, len);
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	printf("src2: %s\n", src2);
	printf("dest2: %s\n", dest2);
	ft_memmove(dest2, src2, len);
	printf("src2: %s\n", src2);
	printf("dest2: %s\n", dest2);
	return (0);
}
*/
