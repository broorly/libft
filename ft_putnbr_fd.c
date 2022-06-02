/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 15:14:45 by mrafik            #+#    #+#             */
/*   Updated: 2021/11/24 15:40:01 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	nbr;

	nbr = nb;
	if (nb < 0)
	{
		nbr = nb * (-1);
		ft_putchar_fd('-', fd);
	}	
	if (nbr >= 10)
	{
		ft_putnbr_fd((nbr / 10), fd);
	}
	ft_putchar_fd((nbr % 10 + '0'), fd);
}
