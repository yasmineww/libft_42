/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <ymakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:02:18 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/11/12 04:35:51 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		size;
	long	m;

	m = n;
	size = ft_intlen(n);
	ptr = (char *) malloc (size + 1);
	if (!ptr)
		return (NULL);
	ptr[size] = '\0';
	size--;
	if (m == 0)
		*ptr = '0'; 
	if (m < 0)
	{
		m = m * -1;
		ptr[0] = '-';
	}
	while (m > 0)
	{
		ptr[size] = (m % 10) + 48;
		m = m / 10;
		size--;
	}
	return (ptr);
}
/*
int main (void)
{
	
	// printf("%d", ft_intlen(0));
	printf("%s\n", ft_itoa((int)-6456546));
	return (0);
}*/
