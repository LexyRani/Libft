/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:52:11 by aceralin          #+#    #+#             */
/*   Updated: 2022/05/31 18:11:08 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*tmp;

	tmp = lst;
	i = 0;
	while (tmp)
	{
		tmp = tmp -> next;
		i++;
	}
	return (i);
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
	
	//ft_lstsize(list);
	ft_lstprint(list);
	printf("%d\n",ft_lstsize(list));
	
	return(0);
}*/