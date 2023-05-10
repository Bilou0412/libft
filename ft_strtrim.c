/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoudach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:51:59 by bmoudach          #+#    #+#             */
/*   Updated: 2023/05/10 18:45:06 by bmoudach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;

	start = 0;
	end = ft_strlen(s1) - 1;
	if (!set)
		return (ft_strdup(s1));
	if (!s1)
		return (NULL);
	while (ft_strchr(s1, set[start]))
		start++;
	while (ft_strrchr(s1, set[end]))
		end--;
	return (ft_substr(s1, start, end - start + 1));
}

/*int	main()
{
	const char	 *s1 = "derffgoulderfsffr";
	const char	*set = "derf";

	printf("%s",ft_strtrim(s1,set));
}*/
