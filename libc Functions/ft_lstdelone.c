/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <ymakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:58:19 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/11/13 21:25:20 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}
/*
void	del(void *to_free)
{
	free(to_free);
}

int	main (void)
{
	t_list	*head = ft_lstnew("salma");
	t_list	*to_free = ft_lstnew("free me");

	head->next = to_free;
	ft_lstdelone(to_free, del);
	//printf("%s", to_free->content);
	printf("%s",(char *)ft_lstlast(head)->content);	
}*/