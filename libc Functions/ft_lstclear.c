/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <ymakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:59:10 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/11/13 21:35:14 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	

	temp = 
	if (!*lst || !del)
		return ;
	while (*lst && del)
	{
		del((*lst)->content);
		*lst = (*lst)->next;
		free();
	}
	*lst = NULL;
}
/*
void	del(void *to_free)
{
	free(to_free);
}

int	main (void)
{
	t_list	*head = ft_lstnew("salma");
	t_list	*node1 = ft_lstnew("hi");
	t_list	*node2 = ft_lstnew("");

	head->next = node1;
	head->next->next = node2;
	ft_lstclear(&head, del);
	printf("%s", head->content);
}*/