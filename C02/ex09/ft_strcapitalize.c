/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 09:11:33 by mcreus            #+#    #+#             */
/*   Updated: 2022/12/08 14:48:53 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowercase(char *str)
{
	int	a;	

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 65 && str[a] <= 90)
		{
			str[a] += 32;
		}
		a++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	a;
	int	b;

	a = 1;
	ft_strlowercase(str);
	if (str[0] >= 97 && str[0] <= 122)
	{
		str[0] -= 32;
	}
	while (str[a] != '\0')
	{
		b = a - 1;
		if (str[a] >= 97 && str[a] <= 122)
		{
			if ((str[b] >= 0 && str [b] <= 47)
				|| (str[b] >= 92 && str[b] <= 96)
				|| str[b] >= 123 || str[b] >= 58 && str[b] <= 64)
				str[a] -= 32;
		}
		a++;
	}
	return (str);
}
