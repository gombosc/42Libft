/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 19:01:22 by cgombos           #+#    #+#             */
/*   Updated: 2024/05/12 20:51:22 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		nbr;

	len = 1;
	nbr = n;
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	if (n < 0)
		len++;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
		str[0] = '-';
	else if (n == 0)
		str[0] = '0';
	while (len-- > (n <= 0))
	{
		str[len] = (n < 0 ? -(n % 10) : n % 10) + '0';
		n /= 10;
	}
	return (str);
}
/*
int	main(void)
{
	int	n = -123;
	char	*str = ft_itoa(n);
	printf("%s\n", str);
	free(str);
	return (0);
}
*/
