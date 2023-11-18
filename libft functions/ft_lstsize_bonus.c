/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <ymakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:56:04 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/11/12 04:33:11 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	if (!lst)
		return (0);
	size = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
/*
int	main (void)
{
	t_list	*head = ft_lstnew("salma");
	t_list	*node1 = ft_lstnew("makh");
	t_list	*node2 = ft_lstnew("yasmine");
	int		size;

	head->next = node1;
	node1->next = node2;
	size = ft_lstsize(head);
	printf("%d", size);
}*/
