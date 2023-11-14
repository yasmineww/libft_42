/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <ymakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:00:02 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/11/13 18:57:41 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void	f(void *str)
{
	char	*ptr = str;
	if (*ptr == 's')
		printf("hi\n");
}

int main (void)
{
	t_list	*head = ft_lstnew("salma");
	t_list	*node1 = ft_lstnew("yasmine");
	t_list	*node2 = ft_lstnew("hi");

	head->next = node1;
	head->next->next = node2;
	ft_lstiter(head, f);
	printf("%s", head->content);
}*/