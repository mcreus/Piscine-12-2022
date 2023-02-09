/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 18:14:16 by mcreus            #+#    #+#             */
/*   Updated: 2022/12/11 18:16:29 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (s1[a] != '\0' && s1[a] == s2[a] && n > 0)
	{
		a++;
		n--;
	}
	if (n == 0)
		return (0);
	return (s1[a] - s2[a]);
}