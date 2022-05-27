/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:41:27 by aceralin          #+#    #+#             */
/*   Updated: 2022/05/11 11:56:17 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int character)
{
	if (character >= 65 && character <= 90)
		return (character + 32);
	return (character);
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