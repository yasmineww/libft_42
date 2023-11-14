/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <ymakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 22:29:48 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/11/13 21:03:39 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *str, char c)
{
	int	count;

	count = 0;
	if (!str)
		return (0);
	while (*str)
	{
		if (*str != c)
		{
			count++;
			while (*str && *str != c)
				str++;
		}
		else
			str++;
	}
	return (count);
}

static char	*ft_strndup(const char *s, int n)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *) malloc (n + 1);
	if (!str)
		return (0);
	while (i < n && s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char    **ft_split(char const *s, char c)
{
	char	**fresh;
	char	*str;
	int		i;
	int		words;

	i = 0;
	words = count_word(s, c);
	fresh = (char **) malloc((words + 1) * sizeof(char *));
	if (!fresh)
		return (0);
	str = (char *) s;
	while (i < words)
	{
		while (*s == c)
		{
			s++;
			str++;
		}
		if (*s == '\0')
			break ;
		while (*s != c && *s != '\0')
			s++;
		fresh[i] = ft_strndup(str, (s - str));
		str = (char *)s;
		i++;
	}
	fresh[i] = 0;
	return (fresh);
}

/*
int	main(void)
{
	char	str[] = "**hello*fellow***students*";
	char	c = '*';
	char	**res;
	int	i;

	i = 0;
	res = ft_split(str, c);
	while (i < count_word(str, c))
	{
		printf("%s\n", res[i]);
		i++;
	}
	return (0);
}
*/