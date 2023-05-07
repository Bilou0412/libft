/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoudach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 22:59:10 by bmoudach          #+#    #+#             */
/*   Updated: 2023/05/07 17:42:59 by bmoudach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	char	*buff;

	buff = malloc(nitems * size);
	if (!buff)
		return (0);
	ft_memset (buff, 0, nitems);
	return (buff);
}
