/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 20:11:39 by cgombos           #+#    #+#             */
/*   Updated: 2024/04/16 22:37:05 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d_len;
	size_t	s_len;

	d_len = strlen(dst);
	s_len = strlen(src);
	if (d_len >= dstsize)
		return (dstsize + s_len);
	if (s_len < dstsize - d_len)
		ft_memcpy(dst + d_len, src, s_len + 1);
	else
	{
		ft_memcpy(dst + d_len, src, dstsize - d_len - 1);
		dst[dstsize - 1] = '\0';
	}
	return (d_len + s_len);
}