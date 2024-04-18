/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 19:30:54 by cgombos           #+#    #+#             */
/*   Updated: 2024/04/17 19:40:58 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
    size_t	j;
    
    i = 0;
    j = 0;
	if (needle[0] == 0)
        return ((char *) haystack);
	while (haystack[i] && i < len)
	{
		/* code */
	}
	
}