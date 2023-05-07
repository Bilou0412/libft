/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoudach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:46:49 by bmoudach          #+#    #+#             */
/*   Updated: 2023/05/07 17:53:49 by bmoudach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (0);
	if (c < 0 || c > 127)
		return ((char *)s);
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return (0);
}
/*#include<stdio.h>
int	main(void)
{
	char str[] = "tripouille";
	printf("%s",strchr(str,'t' + 256));
}
#include <string.h>
int main(void)
{
        char s[] = "tripouille";
	printf("%s \n %s",ft_strchr(s,'t' + 256),s);
        return (0);
}*/
