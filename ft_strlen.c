/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:58:08 by aceralin          #+#    #+#             */
/*   Updated: 2022/05/11 11:55:13 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*
int	main()
{
	printf("%ld\n", ft_strlen("abdc"));
	printf("%ld\n", strlen("abdc"));
	printf("%ld\n", ft_strlen("ab  dc"));
	printf("%ld\n", strlen("ab  dc"));
	printf("%ld\n", ft_strlen("1"));
	printf("%ld\n", strlen("1"));
	return (0);
}*/
