/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:11:28 by aceralin          #+#    #+#             */
/*   Updated: 2022/06/03 17:28:51 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n)
	{
		*str = (unsigned char) c;
		str++;
		n--;
	}
	return (s);
}

/* int	main()
{
	char	str[]= "abcd";
	printf("%s\n", str);
	ft_memset((void *)str, 'a', 4);
	printf("%s\n", str);
}*/