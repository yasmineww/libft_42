/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <ymakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:39:04 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/11/08 04:27:27 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*destt;
	const char	*srcc;
	size_t		i;

	i = 0;
	destt = dst;
	srcc = src;
	if (!destt && !srcc)
		return (NULL);
	while (i < n)
	{
		destt[i] = srcc[i];
		i++;
	}
	return (dst);
}
