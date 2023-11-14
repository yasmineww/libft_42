/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <ymakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:07:49 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/11/11 23:49:54 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc (sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*
int	main (void)
{
	int	content;

	content = 5;
	t_list *list = ft_lstnew((void *)5);
	printf("%d\n", list->content);
	return 0;
}*/
/*
int main()

	int a[] = {15,7,2,9};
	t_list *node1 = ft_lstnew(&a);
	printf("%d",*(int *)node1->content);
}*/