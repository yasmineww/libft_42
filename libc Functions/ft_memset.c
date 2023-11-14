/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <ymakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 19:22:52 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/11/12 23:20:09 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = b;
	while (len > 0)
	{
		*ptr = (unsigned char)c;
		len--;
		ptr++;
	}
	return (b);
}
// int	main (void)
// {
// 	int	i;
// 	char	ptr[] = "hello world";
// 	//ft_memset(&ptr[6], 'h', 1);
// 	ft_memset(i, -1, );
// 	printf("%s", ptr);
// }
