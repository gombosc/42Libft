/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgombos <cgombos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 20:02:40 by cgombos           #+#    #+#             */
/*   Updated: 2024/04/13 00:11:04 by cgombos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

/* Utility Functions */

// Character functions
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
int ft_tolower(int c);
int ft_toupper(int c);

// String functions
size_t ft_strlcpy(char *dst, const char *src, size_t dst_size);
size_t ft_strlen(const char *s);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
int ft_atoi(const char *str);

// Memory manipulation functions
void ft_bzero(void *s, size_t len);
void *ft_memset(void *s, int c, size_t len);
void *ft_memcpy(void *dest, const void *src, size_t len);
void *memmove(void *dest, const void *src, size_t len);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);

#endif