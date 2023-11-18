/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <ymakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:02:42 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/11/17 13:39:34 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	size_t			i;
	size_t			size;

	size = 0;
	if (!s)
		return (0);
	i = 0; 
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	while (s[start + size] && size < len)
		size++;
	ptr = (char *) malloc (size + 1);
	if (!ptr)
		return (NULL);
	while (s[start + i] && i < size)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
