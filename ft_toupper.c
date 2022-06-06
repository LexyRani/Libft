/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:18:10 by aceralin          #+#    #+#             */
/*   Updated: 2022/06/05 11:21:49 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

/* int	main()
{
	printf("%c\n", ft_toupper('a'));
	printf("%c\n", toupper('a'));
	printf("%c\n", ft_toupper('B'));
	printf("%c\n", toupper('B'));
	printf("%c\n", ft_toupper('0'));
	printf("%c\n", toupper('0'));
	printf("%c\n", ft_toupper('-'));
	printf("%c\n", toupper('-'));
	return(0);
} */