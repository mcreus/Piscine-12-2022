/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:34:47 by mcreus            #+#    #+#             */
/*   Updated: 2022/12/08 15:16:37 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if (str[a] == '\0')
		return (1);
	while (str[a] != '\0')
	{	
		if (str[a] >= 65 && str[a] <= 90)
			b++;
		a++;
	}
	if (b == a)
		return (1);
	return (0);
}
