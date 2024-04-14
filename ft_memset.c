/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 20:43:19 by cgombos           #+#    #+#             */
/*   Updated: 2024/04/12 21:48:20 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	   The  memset()  function  fills  the  first  n  bytes of the memory area
	   pointed to by s with the constant byte c.

RETURN VALUE
	   The memset() function returns a pointer to the memory area s.
*/
#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char *ptr;

	ptr = (unsigned char *) s;
	if (!s)
		return (NULL);
	while (len--)
		*(ptr++) = (unsigned char) c;
	return (s);
}

/*
int	main()
{
	char arr[10];
	ft_memset(arr, 0, sizeof(arr));
	for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);
	return 0;
}
*/