/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:02:53 by mcreus            #+#    #+#             */
/*   Updated: 2022/12/14 00:00:57 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	a;
	int	b;

	a = 1;
	b = 1;
	if (power < 0)
		return (0);
	while (a <= power)
	{
		b *= nb;
		a++;
	}
	return (b);
}
