/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:21:00 by aceralin          #+#    #+#             */
/*   Updated: 2022/05/10 14:10:31 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/*int main()
{
    char	str[]= "abcd";
    char    str1[]= "abcd";
	printf("%s\n", str);
	ft_bzero((void *)str, 4);
	printf("%s\n", str);
    printf("%s\n", str1);
	bzero((void *) str1, 4);
	printf("%s\n", str);
    return (0);
}*/