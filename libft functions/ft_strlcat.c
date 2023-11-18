/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <ymakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:55:13 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/11/17 13:26:17 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;
	size_t	j;

	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	len_dst = ft_strlen(dst);
	j = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = 0;
	if (dstsize < len_dst || dstsize == 0)
		return (dstsize + len_src);
	while (j < dstsize - 1 && src[i])
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (len_dst + len_src);
}
