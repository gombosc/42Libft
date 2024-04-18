/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 19:30:54 by cgombos           #+#    #+#             */
/*   Updated: 2024/04/18 22:21:47 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
    size_t	j;
    
    i = 0;
	if (*needle == '\0')
        return ((char *) haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *) haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);	
}
/*
int main()
{
    const char *haystack = "Haystack";
    const char *needle = "stack";
    size_t len = 8;
    char *result = ft_strnstr(haystack, needle, len);

    if (result != NULL)
        printf("Found '%s' in '%s' up to character %zu: %s\n", needle, haystack, len, result);
    else
        printf("Did not find '%s' in '%s' up to character %zu\n", needle, haystack, len);

    return 0;
}
*/
