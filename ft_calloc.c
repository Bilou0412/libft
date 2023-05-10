/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoudach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 22:59:10 by bmoudach          #+#    #+#             */
/*   Updated: 2023/05/09 17:04:40 by bmoudach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	unsigned char	*buff;

	buff = 0;
	if (nitems > sizeof(char) * 2147483424 || size > sizeof(char) * 2147483424)
		return (0);
	buff = malloc(nitems * size);
	if (!buff)
		return (0);
	ft_memset(buff, 0, nitems);
	return ((void *)buff);
}
