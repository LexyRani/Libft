/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:54:46 by aceralin          #+#    #+#             */
/*   Updated: 2022/06/03 17:45:50 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;

	if (!dst || !src)
		return (0);
	i = 0 ;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
//#include <bsd/string.h>
/*int	main()
{
	char src [] = "source";
    char dest [] = "destination";
    char src1[7] = "source";
    char dest1[12]= "destination";
   
    printf("%s\n", src1);
    printf("%s\n", dest1);

    ft_strlcpy((char *)dest, (char *)src, '\0');
    
    int a;
    a = (int *)strlcpy;
    printf("voici la source:%s\n", src);
    printf("voici la destination:%s\n", dest);
    printf("voici la source1:%s\n", src1);
    printf("voici la destination1:%s\n", dest1);
	
    return(0); 
}*/

/*int				main(int argc, const char *argv[])
{
		*dest;
	int		dest_len;

	dest_len = 15;
    char dest [12] = "destination";
	//if (!(dest = (char *)malloc(sizeof(*dest) * dest_len)))
	//	return (0);

	//memset(dest, 0, dest_len);
	//memset(dest, 'r', 6);
    printf("%s\n", dest); 
	printf("%ld\n", ft_strlcpy(dest, "lorem",5));
	printf("%ld\n", strlcpy(dest, "lorem",6));
    printf("%s\n", dest); 

	return (0);
}*/