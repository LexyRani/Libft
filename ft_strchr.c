/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 16:35:25 by aceralin          #+#    #+#             */
/*   Updated: 2022/05/18 12:02:29 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != (char)c)
		i++;
	if (s[i] == (char) c)
		return ((char *)(s + i));
	return (0);
}
/*int main()
{
    rintf("%s\n", ft_strchr("",'l') );
    printf("%s\n", strchr("",'l'));
    return(0);
}*/