/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:00:10 by aceralin          #+#    #+#             */
/*   Updated: 2022/06/06 11:01:11 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat( char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	tmp;

	i = 0;
	j = ft_strlen(dst);
	tmp = ft_strlen (src) + ft_strlen(dst);
	if (j <= size && size > 0)
	{
		while (src[i] != '\0' && j + i < size - 1)
		{
				dst[i + j] = src[i];
				i++;
		}
		dst[i + j] = '\0';
		return (tmp);
	}
	else
		return (size + ft_strlen(src));
}
/*int     main()
{
        char dest[14] = "abcdefghijklm";
        char src[] = "lorem ipsum dolor sit amet";
        char dest1[14] = "abcdefghijklm";
        char src1[] = "lorem ipsum dolor sit amet";
        printf("ft_strlcat: %ld\n", ft_strlcat(dest1,src1,15));
        printf("strlcat: %ld\n", strlcat(dest,src,15));
        printf("%s\n",dest);
        printf("%s\n",dest1);
        return (0);
}*/ 