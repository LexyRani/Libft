/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:41:30 by aceralin          #+#    #+#             */
/*   Updated: 2022/05/20 16:02:33 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	if (!big || !little)
		return (0);
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
/*int main()
{
	printf("%s\n", strnstr("lalalililu","li", 10));
	printf("%s\n", ft_strnstr("lalalililu","li", 10));
	return(0);
}*/