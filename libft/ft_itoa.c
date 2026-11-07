/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samhammo <samhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 21:44:15 by samhammo          #+#    #+#             */
/*   Updated: 2026/11/07 18:32:49 by samhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char    *ft_itoa(int n)
{
	size_t i;
	size_t sign;
	size_t size;
	size_t	val;
	size_t	res;
	char	c;
	char	*t;

	i = 0;
	sign = 0;
	size = ft_len(n);
	val = n;
	t = malloc(sizeof(char) * size);
	if (!t)
		return (NULL);
	if (n < 0)
	{
		sign = 1;
		n = -n;
	}
	while (i < size)
	{
		if (sign == 1)
		{
			t[i] = '-';
			sign = 0;
			i++;
		}
		res = res
		i++;
	}
}