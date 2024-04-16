/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 23:33:07 by cgombos           #+#    #+#             */
/*   Updated: 2024/04/16 18:33:58 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The memory areas may overlap: copying takes place as though
the  bytes in src are first copied into a temporary array that does not
overlap src or dest, and the bytes are then copied from  the  temporary
array to dest.
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	if (!dest && !src)
		return (dest);
	if (s < d || s + len > d)
	{
		while(len-- > 0)
			d[len] = s[len];
	}
	else
	{
		while (len-- > 0)
			*d++ = *s++; 
	}
	return	(dest);
}