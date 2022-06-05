/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:45:11 by aceralin          #+#    #+#             */
/*   Updated: 2022/05/31 17:35:59 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst != NULL)
		new -> next = *lst;
	*lst = new;
}

/*t_list *ft_lstnew(void *content)
{
	t_list *new_element;
	
	new_element = malloc(sizeof(t_list));
	if (!new_element)
		return (NULL);
	new_element->content = content;
	new_element->next = NULL;
	return (new_element);
}

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

int main()
{
	t_list **begin_list;
	t_list *list;
	t_list *new;

	begin_list = &list;
	new = ft_lstnew("first");
	list = ft_lstnew("Daniel");
	// ft_lstprint(list);
	list->next = ft_lstnew("42");
	// ft_lstprint(list);
	list->next->next = ft_lstnew("Ecole");
	printf("\nOriginal:\n");
	ft_lstprint(list);
	ft_lstadd_front(begin_list, new);
	printf("\nNouvelle:\n");
	ft_lstprint(list);
	// new-> *lst = ft_lstnew("Second");
}*/