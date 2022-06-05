/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:42:00 by aceralin          #+#    #+#             */
/*   Updated: 2022/06/03 17:29:09 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*s;
	char	*d;

	s = (char *) src;
	d = (char *) dest;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*int main()
{
    char src [] = "source";
    char dest [] = "destination";
    char src1 [] = "source";
    char dest1 [] = "destination";

    printf("%s\n", src);
    printf("%s\n", dest);

    ft_memcpy(dest, src, 0);
    memcpy(dest1,src1, 0);

    printf("voici la source:%s\n", src);
    printf("voici la destination:%s\n", dest);
    printf("voici la source1:%s\n", src1);
    printf("voici la destination1:%s\n", dest1);
    return(0); 
}*/