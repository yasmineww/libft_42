/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <ymakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:06:46 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/11/13 02:05:00 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}
/*
int main (void)
{
	t_list	*head = ft_lstnew("salma");
	t_list	*node = ft_lstnew("hhi");
	t_list	*new = ft_lstnew("yass");

	head->next = node;
	ft_lstadd_front(&head, new);
	printf("%s", new->content);
}
*/