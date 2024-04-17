/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:32:02 by cgombos           #+#    #+#             */
/*   Updated: 2024/04/17 18:45:57 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	cc;
	size_t	i;

	str = (unsigned char) s;
	cc = (unsigned char) c;
	i = 0;

	while (i < n)
	{
		if (str[i] == cc)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}