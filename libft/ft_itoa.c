/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samhammo <samhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 21:44:15 by samhammo          #+#    #+#             */
/*   Updated: 2026/11/08 21:10:13 by samhammo         ###   ########.fr       */
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

char	*ft_itoa(int n)
{
	size_t	size;
	long	val;
	char	*t;

	size = ft_len(n);
	val = n;
	t = malloc(sizeof(char) * (size + 1));
	if (!t)
		return (NULL);
	t[size] = '\0';
	if (val < 0)
	{
		t[0] = '-';
		val = -val;
	}
	if (val == 0)
		t[0] = '0';
	while (val > 0)
	{
		size--;
		t[size] = (val % 10) + '0';
		val = val / 10;
	}
	return (t);
}
