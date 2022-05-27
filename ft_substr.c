/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:57:45 by aceralin          #+#    #+#             */
/*   Updated: 2022/05/20 16:22:30 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	if (start > (ft_strlen(s)))
		return (ft_strdup(""));
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	while (s[i])
	{
		if ((i >= start) && (j < len))
			str[j++] = s[i];
		i++;
	}
	str[j] = '\0';
	return (str);
}

/*int	main()
{
	printf("%s\n", ft_substr("tripouille", 1,1));
	return(0);
}*/