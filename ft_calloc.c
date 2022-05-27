/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 13:22:33 by aceralin          #+#    #+#             */
/*   Updated: 2022/05/24 16:38:14 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;

	if ((int)nmemb <= 0 || (int)size <= 0)
		return (NULL);
	ptr = malloc (nmemb * size);
	if (!ptr)
		return (0);
	ft_memset (ptr, 0, (nmemb * size));
	return (ptr);
}
/*int	main()
{
	printf("[%p]\n", calloc(2147483647, 2));
	printf("[%p]\n", ft_calloc(2147483647, 2));
	char	*ptr = "aaaaaa"; 
	printf("%s\n", ptr);
	ptr = ft_calloc(2,3);
	printf("%s\n", ptr);
	return(0);
}*/