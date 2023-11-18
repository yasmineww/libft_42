/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <ymakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:11:51 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/11/13 18:00:59 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*helper(char const *s1, char const *s2, char *ptr)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	ptr = (char *) malloc (ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ptr)
		return (NULL);
	helper(s1, s2, ptr);
	return (ptr);
}
/*
int main (void)
{
	char	*ptr;

	ptr = ft_strjoin(" ", " ");
	printf("%s", ptr);
}*/
