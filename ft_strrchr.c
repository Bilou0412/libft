/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoudach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:07:01 by bmoudach          #+#    #+#             */
/*   Updated: 2023/05/12 19:13:38 by bmoudach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;	

	i = ft_strlen(s);
	while (i > 0)
	{		
		if (s[i] == c)
		{
			return ((char *)s + i);
		}
		i--;
	}
	if (s[i] == c)
		return ((char *)s);
	return (0);
}
/*int	main(void)
{

	const char	str[] = "asdfgdhj";
	printf("%s",ft_strrchr(str,0));
}*/
