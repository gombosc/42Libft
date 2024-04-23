/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 19:35:15 by cgombos           #+#    #+#             */
/*   Updated: 2024/04/23 16:30:28 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || c >= 'A' && c <= 'Z')
        return (1);
    else
        return (0);
}

int main()
{
	char c = 'a';
	int result = ft_isalpha(c);
	printf("Result: %d\n", result);
	
	return 0;
}