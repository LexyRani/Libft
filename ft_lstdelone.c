/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:51:39 by aceralin          #+#    #+#             */
/*   Updated: 2022/06/01 17:11:12 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst -> content);
	free(lst);
}

/* void    ft_lstprint(t_list *list)
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
	
	list = ft_lstnew("Hello");
	list -> next =ft_lstnew("World");
	list -> next -> next = ft_lstnew("J'apprends");
	list -> next -> next -> next = ft_lstnew(" les listes");
	list -> next -> next -> next -> next = ft_lstnew("chainees");
	
	ft_lstprint(list);
	printf("%p\n",ft_lstdelone(list, del(list)));
	
	return(0);
}*/