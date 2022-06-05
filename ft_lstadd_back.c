/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:51:30 by aceralin          #+#    #+#             */
/*   Updated: 2022/06/01 15:59:57 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{	
	if (*lst)
	{
		ft_lstlast(*lst)->next = new;
	}
	else
		*lst = new;
}

/*
void    ft_lstprint(t_list *list)
{
	t_list  *tmp_list;

	tmp_list = list;
	while (tmp_list)
	{
		printf("%s\n", (char*)tmp_list->content);
		printf("%p\n", tmp_list->next);
		tmp_list = tmp_list->next;
	}    
}

int	main()
{
	t_list	*list;
	t_list	**tmp;
	t_list	*new;
	
	tmp = &list; 
	new = ft_lstnew("first");
	list = ft_lstnew("Hello");
	list -> next =ft_lstnew("World");
	list -> next -> next = ft_lstnew("J'apprends");
	list -> next -> next -> next = ft_lstnew(" les listes");
	list -> next -> next -> next -> next = ft_lstnew("chainees");
	
	ft_lstadd_back(tmp, new);
	ft_lstsize(list);
	ft_lstprint(list);
	printf("%p\n",ft_lstadd_back(*list, new));
	
	return(0);
} */