/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 13:22:33 by aceralin          #+#    #+#             */
/*   Updated: 2022/06/09 14:11:52 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (size != 0 && (((int)nmemb * size) / size) != nmemb)
		return (NULL);
	ptr = (void *) malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

/*
int	main()
{
	// // printf("[%p]\n", calloc(2147483647, 2));
	// printf("[%p]\n", ft_calloc(2147483647, 1));
	char	*ptr = "aaaaaa"; 
	printf("%s\n", ptr);
	ptr = ft_calloc(2147483647,3);
	printf("%s\n", ptr);
	return(0);
}*/