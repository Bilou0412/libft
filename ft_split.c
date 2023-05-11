/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoudach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:52:15 by bmoudach          #+#    #+#             */
/*   Updated: 2023/05/11 22:44:06 by bmoudach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

static int	count_array(char const *s1, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s1[i])
	{
		if (s1[i] == c && s1[i + 1] !=c)
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
	char	**array;
	unsigned int	j;

	array = malloc(count_array(s, c) * sizeof(char **));
	if (!array)
		return (NULL);
	while (j < count())
	{
		while(s[i] != c || s[i])
			i++;
		array[j] = malloc((i + 1) * sizeof(char *));
		if(!array[j])
			return(NULL);
		i = 0
		if (s[i] == c && s1[i + 1] != c)
			

	}

}

int	main(void)
{
	char	**array;
	char	*s = "je      suis      suis     partit     ";
	char	c = ' ';

	array = ft_split(s, c);
	printf("%s", array[3]);
}
