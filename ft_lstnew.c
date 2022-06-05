/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 12:27:25 by aceralin          #+#    #+#             */
/*   Updated: 2022/05/31 17:34:23 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_element;

	new_element = malloc(sizeof(t_list));
	if (!new_element)
		return (NULL);
	new_element->content = content;
	new_element->next = NULL;
	return (new_element);
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

int main(void)
{
	t_list *list;
	t_list *element_pour_mettre_devant;

	element_pour_mettre_devant = ft_lstnew("first");
	
	list = ft_lstnew("Daniel");
	ft_lstprint(list);
	list->next = ft_lstnew("42");
	ft_lstprint(list);
	list->next->next = ft_lstnew("Ecole");
	ft_lstprint(list);
	list->next->next; 
}*/