/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <ymakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 21:11:47 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/11/08 05:21:26 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dstt;
	char		*srcc;

	dstt = (char *)dst;
	srcc = (char *)src;
	if (dstt < srcc)
		ft_memcpy(dstt, srcc, len);
	else if (srcc < dstt)
	{
		while (len > 0)
		{
			dstt[len - 1] = srcc[len - 1];
			len--;
		}
	}
	return (dst);
}
