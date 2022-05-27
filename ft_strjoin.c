/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:58:04 by aceralin          #+#    #+#             */
/*   Updated: 2022/05/20 15:32:03 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		len;
	int		j;

	if (s1 && s2)
	{
		i = 0;
		len = ft_strlen(s1) + ft_strlen(s2);
		str = malloc(sizeof(char) * (len + 1));
		if (!str)
			return (NULL);
		while (s1[i])
		{
			str[i] = s1[i];
			i++;
		}
		j = 0;
		while (s2[j])
			str[i++] = s2[j++];
		str[i] = '\0';
		return (str);
	}
	return (0);
}
/*int main()
{
	printf("%s\n", ft_strjoin("tripouille", "42"));
}*/