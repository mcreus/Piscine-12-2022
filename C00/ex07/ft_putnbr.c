/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 10:50:10 by mcreus            #+#    #+#             */
/*   Updated: 2023/03/15 11:13:39 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int	main()
{
	ft_putnbr(42);
	ft_putchar ('\n');
	ft_putnbr(-56165561);
	ft_putchar('\n');
	ft_putnbr(1564);
	ft_putchar('\n');
	ft_putnbr(8);
	ft_putchar('\n');
	ft_putnbr(0);
}
