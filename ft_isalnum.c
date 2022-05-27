/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:01:30 by aceralin          #+#    #+#             */
/*   Updated: 2022/05/11 11:45:32 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c);
int	ft_isalpha(int c);

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}

/*int	main()
{
	printf("%d\n",isalnum('c'));
	printf("%d\n",ft_isalnum('c'));
	printf("%d\n",isalnum('1'));
	printf("%d\n",ft_isalnum('1'));
	printf("%d\n",isalnum(' '));
	printf("%d\n",ft_isalnum(' '));
}*/
