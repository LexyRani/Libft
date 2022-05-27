/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:42:03 by aceralin          #+#    #+#             */
/*   Updated: 2022/05/17 15:35:45 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	i = 0;
	if (!str1 || !str2)
		return (0);
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/*int main()
{
	printf("%d\n",ft_memcmp("a\200","a\0", 5));
	printf("%d\n", memcmp("a\200","a\0", 5));
	char a = 0;
	char b = 128;
	if (b == -128)
		printf("you didn't know it but b is strange\n");
	unsigned char a1 = 0;
	unsigned char b1 = 128;
	printf("%d\n", a - b);
	printf("%d\n", a1 - b1);
	return(0);
} */