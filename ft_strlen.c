/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 22:04:39 by cgombos           #+#    #+#             */
/*   Updated: 2024/04/16 22:35:00 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while (*s++)
        i++;
    return i;
}

/*
int main()
{
    char s[] = "Alex";
    int r = ft_strlen(s);
    printf("L is: %d", r);
    return 0;
}
*/
