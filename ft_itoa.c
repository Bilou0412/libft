/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoudach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 10:34:24 by bmoudach          #+#    #+#             */
/*   Updated: 2023/05/11 18:56:24 by bmoudach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

static void	put_in_str(char *str_num, int nb)
{
	static int			i;
	long int			n;

	n = (long int)nb;
	if (n == 0)
		str_num[i] = '0';
	if (n < 0)
	{
		n = n * -1;
		str_num[i++] = '-';
	}
	if (n > 9)
	{
		put_in_str(str_num, n / 10);
		put_in_str(str_num, n % 10);
	}
	if (n <= 9)
		str_num[i++] = n + 48;
}

static int	ft_len_n(int nb)
{
	int			len;
	long int	n;

	n = (long int)nb;
	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = n * -1;
		len++;
	}
	if (n > 0)
	{
		while (n > 0)
		{
			n = n / 10;
			len++;
		}
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str_num;

	str_num = 0;
	len = ft_len_n(n);
	str_num = malloc((len + 1) * sizeof(char));
	if (!str_num)
		return (0);
	put_in_str(str_num, n);
	str_num[len] = '\0';
	return (str_num);
}

/*int	main(void)
{
	printf("%s", ft_itoa(543000));
}*/
