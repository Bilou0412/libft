/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoudach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 10:34:24 by bmoudach          #+#    #+#             */
/*   Updated: 2023/05/12 19:31:54 by bmoudach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

static int	len_n(int n)
{
	int	i;

	i = 0;
	while (n < 1)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	len_n(n);
	return ("a");
}

int	main(void)
{
	printf("%s", ft_itoa(543000));
}
