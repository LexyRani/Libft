/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:41:55 by aceralin          #+#    #+#             */
/*   Updated: 2022/06/03 17:53:39 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	int		i;

	s = (char *) src;
	d = (char *) dest;
	i = 0;
	if (dest > src)
	{
		i = (int) n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	else
	{
		while (i < (int) n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

/*
int main()
{
    // char src [] = "source";
    // char dest [] = "destination";
    // char src1 [] = "source";
    // char dest1 [] = "destination";

    // printf("%s\n", src);
    // printf("%s\n", dest);

    // ft_memmove((char *)dest, (char *)src, '\0');
    // memmove(dest1,src1, '\0');
	char str[] = "aabbccdd";
	ft_memmove(str+2, str, 6);
	printf("%s\n", str);
}*/