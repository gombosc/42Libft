/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 22:39:27 by cgombos           #+#    #+#             */
/*   Updated: 2024/05/14 16:33:29 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		cc;
	const char	*res;

	cc = (char) c;
	res = NULL;
	while (*s)
	{
		if (*s == cc)
			res = s;
		s++;
	}
	if (cc == 0)
		res = s;
	return ((char *)res);
}

/*
int main() {
  char *str = "Hello, world!";
  char ch = 'l';
  char *expected = str + 10;  // Points to 'o' in "Hello"
  char *result = ft_strchr(str, ch);
  printf("Test: Expected: %p, Result: %p\n", expected, result);
  return 0;
}
*/