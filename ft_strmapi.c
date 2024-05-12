/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 20:22:25 by cgombos           #+#    #+#             */
/*   Updated: 2024/05/12 20:53:58 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	if (!s || !f)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
 char my_func(unsigned int i, char str)
{
	if (str >= 'a' && str <= 'z')
		return (str -= 32);
	else
		return (str);
}

int main(void)
{
	char	*str = "Hello, World!";
	char	*new_str = ft_strmapi(str, my_func);
	printf("%s\n", new_str);
	free(new_str);
	return (0);
}
*/