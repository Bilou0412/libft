/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoudach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 14:14:19 by bmoudach          #+#    #+#             */
/*   Updated: 2023/05/11 16:55:05 by bmoudach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				len;
	unsigned int	i;
	char			*s1;

	i = 0;
	len = ft_strlen(s);
	if (!len)
	{
		s1 = malloc(sizeof(char));
		if (!s1)
			return (NULL);
		s1[0] = '\0';
		return (s1);
	}
	s1 = malloc((len + 1) * sizeof(char));
	if (!s1)
		return (0);
	while (s[i])
	{
		s1[i] = (f)(i, s[i]);
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
