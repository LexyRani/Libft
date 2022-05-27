/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:40:01 by aceralin          #+#    #+#             */
/*   Updated: 2022/05/11 11:49:10 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha( int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*int	main()
{	
	printf("%d\n", ft_isalpha ('t'));
	printf("%d\n", ft_isalpha ('0'));
	printf("%d\n", ft_isalpha ('-'));
	printf("%d\n", isalpha('t'));
	printf("%d\n", isalpha('0'));
	printf("%d\n", isalpha('-'));
	return(0);
}
*/
