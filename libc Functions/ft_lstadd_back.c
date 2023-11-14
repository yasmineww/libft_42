/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <ymakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:54:31 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/11/13 18:57:34 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
}
/*
int	main (void)
{
	t_list	*head = ft_lstnew("salma");
	t_list	*node1 = ft_lstnew("makh");
	t_list	*node2 = ft_lstnew("hi");
	t_list	*new = ft_lstnew("re");

	head->next = node1;
	head->next->next = node2;
	ft_lstadd_back(&head, new);
	//printf("%s",(char *)head->next->next->content);	
	printf("%s",ft_lstlast(head)->content);	
}*/
