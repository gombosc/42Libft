/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:01:28 by cgombos           #+#    #+#             */
/*   Updated: 2024/05/14 18:01:39 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_size;

	total_size = nmemb * size;
	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}

/*
V2
void	*ft_calloc(size_t nmemb, size_t size)
{
	void		*memory;
	size_t		nbytes;

	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	nbytes = nmemb * size;
	memory = malloc(nbytes);
	if (memory == NULL)
		return (NULL);
	ft_bzero(memory, nbytes);
	return (memory);
}
*/

/*
int main()
{
	char *str = (char *)ft_calloc(10, sizeof(char));
	printf("%s\n", str);
	return 0;
}
*/