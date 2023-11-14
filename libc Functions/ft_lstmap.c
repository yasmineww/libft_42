/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <ymakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:00:46 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/11/13 21:27:31 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
	new = ft_lstnew(NULL);
	if (!new)
	{
		ft_lstclear(&lst, del((*lst)->content));
		return (NULL);
	}
	return (new);
}
/*
void	*f(void *str)
{
	if (str == 's')
		printf("hi");
}

void	del(void *lst)
{
	free(lst);
}

int	main (void)
{
	t_list	*head = ft_lstnew("salma");
	t_list	*node1 = ft_lstnew("yasmine");
	t_list	*node2 = ft_lstnew("hi");

	printf("%s",ft_lstmap(head, f, del));
}*/
