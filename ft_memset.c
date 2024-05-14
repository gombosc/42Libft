/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 20:43:19 by cgombos           #+#    #+#             */
/*   Updated: 2024/05/14 18:23:23 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
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