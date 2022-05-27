/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 12:01:10 by aceralin          #+#    #+#             */
/*   Updated: 2022/05/11 11:51:27 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9' )
		return (1);
	return (0);
}
/*

int	main()
{
	printf("%d\n",isdigit('1'));
	printf("%d\n",ft_isdigit('1'));
	printf("%d\n",isdigit('-'));
	printf("%d\n",ft_isdigit('-'));
	printf("%d\n",isdigit('d'));
	printf("%d\n",ft_isdigit('d'));
	return(0);
}*/
