/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:41:27 by aceralin          #+#    #+#             */
/*   Updated: 2022/06/05 11:26:11 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

/* int     main()
{
        printf("%c\n", ft_tolower('a'));
	printf("%c\n", tolower('a'));
	printf("%c\n", ft_tolower('B'));
	printf("%c\n", tolower('B'));
	printf("%c\n", ft_tolower('0'));
	printf("%c\n", tolower('0'));
	printf("%c\n", ft_tolower('-'));
	printf("%c\n", tolower('-'));
	return(0);
} */