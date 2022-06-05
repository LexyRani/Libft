/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 13:26:25 by aceralin          #+#    #+#             */
/*   Updated: 2022/05/30 11:59:28 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		size;
	int		i;
	char	*str;

	if (!s)
		return (0);
	size = ft_strlen (s);
	str = malloc (sizeof(char) * (size + 1));
	i = 0;
	if (!str)
		return (0);
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int main()
{
	printf("%s\n", ft_strdup("abcd"));
	printf("%s\n", strdup("abcd"));
    return(0);
}*/