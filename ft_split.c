/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoudach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:52:15 by bmoudach          #+#    #+#             */
/*   Updated: 2023/05/11 20:39:50 by bmoudach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

static int	if_sep(char a, char c)
{
	if (a == c)
		return (1);
	else
		return (0);
}

static int	adress_index(char const *s, char *ptr)
{
	return (ptr - s);
}

static int	count_array(char const *s1, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s1[i])
	{
		if (if_sep(s1[i], c))
		{
			count++;
			i++;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char			**array;
	unsigned int	start;
	unsigned int	j;
	unsigned int	size;

	start = 0;
	j = 0;
	size = 0;
	if (!s)
		return (NULL);
	array = ft_calloc((count_array(s, c)), sizeof(char **));
	while (s[start + size])
	{
		size = adress_index(s, ft_strchr(s + start, (int)c));
		if (!size)
			size = ft_strlen(s) - start;
		array[j] = ft_calloc((size_t)size, sizeof(char *));
		array[j] = ft_substr(s, start, (size_t)size);
		start = size + start;
		size = 0;
		j++;
	}
	return (array);
}

int	main(void)
{
	char	**array;
	char	*s = "je suis suis partit";
	char	c = ' ';

	array = ft_split(s, c);
	printf("%s", array[0]);
}
