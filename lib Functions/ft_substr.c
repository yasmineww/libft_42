/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <ymakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:02:42 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/11/09 16:28:24 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	i;
	size_t			size;

	if (!s || start >= ft_strlen(s))
	{
		ptr = (char *)malloc(1);
		if (ptr)
			ptr[0] = '\0';
		return (ptr);
	}
	size = ft_strlen(s + start);
	printf("%zu\n",size);
	i = 0;
	ptr = (char *) malloc (size + 1);
	if (!ptr)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		return (0);
	while (s[start + i] && i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
int main ()
{
	ft_substr("", 1, 3);
}