/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 22:02:07 by cgombos           #+#    #+#             */
/*   Updated: 2024/04/16 19:48:27 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
       The  memcpy()  function  copies  n bytes from memory area src to memory
       area dest.  The memory areas must not overlap.  Use memmove(3)  if  the
       memory areas do overlap.

RETURN VALUE
       The memcpy() function returns a pointer to dest.
*/
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	if (!dest && !src)
		return (dest);
	while (len-- > 0)
		*(d++) = *(s++);
	return (dest);
}
/*
int main() {
    char src[] = "Hello, World!";
    char dest[20];
    // Initialize the destination array with some values
    for (int i = 0; i < 20; i++)
        dest[i] = 'A';

    printf("Before ft_memcpy: %s\n", dest);

    ft_memcpy(dest, src, strlen(src) + 1);
    printf("After ft_memcpy: %s\n", dest);
    
    memcpy(dest, src, strlen(src) + 1);
    printf("After standard memcpy: %s\n", dest);
    return 0;
}
*/