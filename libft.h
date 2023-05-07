/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoudach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:57:46 by bmoudach          #+#    #+#             */
/*   Updated: 2023/05/07 15:13:38 by bmoudach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H

# include<stddef.h>
# include<stdio.h>
# include<stdlib.h>
# include<string.h>
# include<assert.h>

size_t	ft_strlen(const char *str);
void	ft_bzero(void *s, size_t n);
int	ft_isalnum(int argument);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int     ft_isdigit(int c);
int	ft_isprint(int arg);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t num);
int	ft_memcmp(const void * pointer1, const void * pointer2, size_t size);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strchr(const char *s, int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strrchr(const char *s, int c);
int     ft_tolower(int ch);
int	ft_toupper(int ch);
void    *ft_memmove(void *dst, const void *src, size_t num);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
size_t  ft_strlcat(char *dst, const char *src, size_t n);
int 	ft_atoi(const char *str );
void * ft_calloc( size_t nitems, size_t size );
char * ft_strdup( const char * src );
char	*ft_strnstr(const char	*big, const char *little, size_t len);
#endif
