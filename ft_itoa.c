/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 19:01:22 by cgombos           #+#    #+#             */
/*   Updated: 2024/05/14 16:39:15 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	set_digits(char *str, int n, int len)
{
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	else if (n == 0)
		str[0] = '0';
	while (len-- > (n <= 0))
	{
		if (n < 0)
			str[len] = -(n % 10) + '0';
		else
			str[len] = n % 10 + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		nbr;

	len = 0;
	nbr = n;
	if (n == 0)
		len = 1;
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
	set_digits(str, n, len);
	return (str);
}
/*
int	main(void)
{
	int	n = -12345;
	char	*str = ft_itoa(n);
	printf("%s\n", str);
	free(str);
	return (0);
}
*/
