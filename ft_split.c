/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:16:14 by cgombos           #+#    #+#             */
/*   Updated: 2024/05/09 18:58:38 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	words;

	words = 0;
	while (*s)
	{
		if (*s != c)
		{
			words++;
			while (*s && *s != c)
				s++;
		}
		if(!*s)
			break; // count the word
		s++; // move to the next character
	}
	return (words);
}

static size_t	word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	words;
	size_t	i;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	arr = (char **)malloc(sizeof(char *) * (words + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s && *s == c)
			s++;
		arr[i] = ft_substr(s, 0, word_len(s, c));
		if (!arr[i])
		{
			while (i > 0)
				free(arr[i--]);
			free(arr);
			return (NULL);
		}
		s += word_len(s, c);
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

int main()
{
	char *s = "Hello, world!";
	char **arr = ft_split(s, ' ');
	int i = 0;
	while (arr[i])
	{
		printf("%s\n", arr[i]);
		i++;
	}
	return (0);
}