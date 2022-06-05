/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:58:21 by aceralin          #+#    #+#             */
/*   Updated: 2022/06/02 18:57:51 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
	}
	else if (-2147483648 < n && n <= 2147483647)
	{
		if (n < 0)
		{
			n = n * (-1);
			ft_putchar_fd('-', fd);
		}
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}		
		else
		{
			ft_putchar_fd(n + '0', fd);
		}
	}	
}

/*#include <sys/types.h>
       #include <sys/stat.h>
       #include <fcntl.h>
int main(void)
{
	int fd = open("test",  O_WRONLY);
	ft_putnbr_fd(-29382193, fd);
}*/