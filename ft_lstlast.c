/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:51:54 by aceralin          #+#    #+#             */
/*   Updated: 2022/06/03 17:44:34 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}

/*void    ft_lstprint(t_list *list)
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
	printf("%p\n",ft_lstlast(list));
	
	return(0);
}*/