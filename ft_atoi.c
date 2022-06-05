/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:50:23 by aceralin          #+#    #+#             */
/*   Updated: 2022/05/30 11:27:25 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	nb;
	int	sign;

	i = 0;
	nb = 0;
	sign = 1;
	if (!nptr)
		return (0);
	while ((nptr[i] >= 9 && nptr[i] <= 13) || (nptr [i] == ' '))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
		{
			sign = sign * (-1);
		}
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{	
		nb = nb * 10 + (nptr[i] - '0');
		i++;
	}	
	return (nb * sign);
}

/*
int main()
{
	printf("42:%d\n", ft_atoi(" \n   42t4457"));
	printf("42:%d\n", atoi(" \n   42t4457"));
	
	printf("-42:%d\n", ft_atoi(" a+--+-42sfs:f545"));
	printf("-42:%d\n", atoi(" a+--+-42sfs:f545"));
	
	printf("0:%d\n", ft_atoi("\0 1337"));
	printf("0:%d\n", atoi("\0 1337"));
	
	printf("0:%d\n", ft_atoi("-0"));
	printf("0:%d\n", atoi("-0"));
	
	printf("0:%d\n", ft_atoi(" - 1 3 2 5 6 3 2 1 6 7"));
	printf("0:%d\n", atoi(" - 1 3 2 5 6 3 2 1 6 7"));
	
	printf("-1325632167:%d\n", ft_atoi("-1325632167"));
	printf("-1325632167:%d\n", atoi("-1325632167"));
	
	printf("-100:%d\n", ft_atoi("-+-100"));
	printf("-100:%d\n", atoi("-+-100"));
	
	printf("min:%d\n", ft_atoi("\t2147483648"));
	printf("min:%d\n", atoi("\t2147483648"));
	
	printf("max:%d\n", ft_atoi("\v^2147483647"));
	printf("max:%d\n", atoi("\v^2147483647"));
}*/