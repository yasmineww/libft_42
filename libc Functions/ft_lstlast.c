/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <ymakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:56:54 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/11/12 03:37:11 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
int main (void)
{
	t_list	*head = ft_lstnew("salma");
	t_list	*node1 = ft_lstnew("yasmine");
	t_list	*node2 = ft_lstnew("hi");

	head->next = node1;
	head->next->next = node2; 
	printf("%s", (char *)ft_lstlast(head)->content);
}*/