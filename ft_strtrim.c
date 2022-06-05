/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:57:55 by aceralin          #+#    #+#             */
/*   Updated: 2022/05/30 17:56:58 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkset(const char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_len(const char *s1, const char *set)
{
	int	start;
	int	end;

	start = 0;
	while (ft_checkset(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (ft_checkset(s1[end - 1], set))
		end--;
	return (end - start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*new;

	i = 0;
	while (ft_checkset(s1[i], set))
		i++;
	new = ft_substr(s1, i, ft_len(s1, set));
	return (new);
}
/*int main()
{
	printf("%s", ft_strtrim(" xtripouille x"," x"));
	return(0);
}*/