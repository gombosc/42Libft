/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 22:39:27 by cgombos           #+#    #+#             */
/*   Updated: 2024/05/13 21:07:10 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	cc;

	cc = (char) c;
	while (*s)
	{
		if (*s == cc)
			return ((char *)s);
		s++;
	}
	return (0);
}

/*
int main() {
  char *str = "Hello, world!";
  char ch = 'H';
  char *expected = str;  // Points to 'o' in "Hello"
  char *result = ft_strchr(str, ch);
  printf("Test: Expected: %p, Result: %p\n", expected, result);
  return 0;
}
*/
