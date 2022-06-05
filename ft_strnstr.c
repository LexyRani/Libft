/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:41:30 by aceralin          #+#    #+#             */
/*   Updated: 2022/06/02 19:13:32 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	if (!big || !little)
		return (0);
	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len && little[j] != '\0')
			j++;
		if (little[j] == '\0')
			return ((char *) big + i);
		i++;
	}
	return (0);
}
/*
int main()
{
	char big[] = "lalalililu";
	char *little = NULL;
	char *str = ft_strnstr(big, little, 10);
	// printf("%s\n", strnstr("lalalililu","li", 10));
	printf("%s\n", str);
	return(0);
}*/