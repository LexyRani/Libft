/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:25:32 by aceralin          #+#    #+#             */
/*   Updated: 2022/05/11 11:52:39 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
int	main()
{
	printf("%d\n", isprint('0'));
	printf("%d\n", ft_isprint('0'));
	printf("%d\n", isprint(' '));
	printf("%d\n", ft_isprint(' '));
	printf("%d\n", isprint('\n'));
	printf("%d\n", isprint('\n'));
}*/
