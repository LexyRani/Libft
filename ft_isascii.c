/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:28:32 by aceralin          #+#    #+#             */
/*   Updated: 2022/05/11 11:50:28 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main ()
{
	printf("%d\n", isascii('A'));
	printf("%d\n", ft_isascii('A'));
	printf("%d\n", isascii('	'));
	printf("%d\n", ft_isascii('	'));
	printf("%d\n", isascii('1'));
	printf("%d\n", ft_isascii('1'));
	
	return(0);
}
*/ 