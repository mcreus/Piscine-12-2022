/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 14:49:09 by mcreus            #+#    #+#             */
/*   Updated: 2022/12/12 14:56:26 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	tmp;

	tmp = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		tmp = tmp * (-1);
	}
	if (tmp >= 10)
	{
		ft_putnbr(tmp / 10);
	}
	ft_putchar((tmp % 10) + '0');
}
